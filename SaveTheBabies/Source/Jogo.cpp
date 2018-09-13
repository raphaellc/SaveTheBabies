#include "Jogo.h"

Jogo::Jogo()
{
	
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	this->vida = 10;
	this->score = 2;
	this->wave = 1;
	bb = new Bebe();
	cama_elastica = new CamaElastica();
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	//	...
	//Carregar Estado do Jogo
	
	this->of_stream.open("..\\save.dat", ios::binary |ios::trunc);
	if (!this->of_stream) {
		gDebug.erro("não abriu arquivo save");
	}
	else {
		this->gravar(this->of_stream);
		//this->carregar(f_teste_stream);
		this->of_stream.close();
	}
	this->if_stream.open("..\\save.dat", ios::binary);
	if (!this->if_stream) {
		gDebug.erro("não abriu arquivo if_stream", this);
	}
	else {
		
		this->carregar(this->if_stream);
		this->if_stream.close();
	}
	
	//------Fim Carregamento do estado do Jogo -------//

	this->f_stream.open("..\\mapa_assets.txt", ios::in);
	if (!f_stream) {
		gDebug.erro("não abriu arquivo", this);
	}
	else {
		//Carregar Recursos
		CarregadorDeAssets * cda_carregador_assets = new CarregadorDeAssets;
		if (!cda_carregador_assets->carregarRecursos(f_stream)) {
			gDebug.erro("Falha no carregamento de recursos");
		}
		f_stream.close();
	}
	gRecursos.getSpriteSheet("baby")->setNumFramesDaAnimacao(0, 4);
	int i_anim = gRecursos.getSpriteSheet("baby")->adicionarAnimacao(0, 12, 10, 50);
	bb->setSpriteSheet("baby");
	bb->setPosicaoGameObject(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	bb->setVelociadade(0.1);

	//Carregar Recursos do Prédio
	building.setSpriteSheet("building");
	fire_back.setSpriteSheet("fire_background");
	building_floor.setSpriteSheet("building_floor1");

	//Carregar Bombeiros
	cama_elastica->setSpriteSheet("cama_elastica");
	cama_elastica->setPosicaoGameObject(300,500);
	
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...
	gRecursos.descarregarSpriteSheet("baby");
	
	uniFinalizar();
}

void Jogo::executar()
{
	int i_direcao_bb = 1;
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		
		uniIniciarFrame();
		fire_back.desenhar(0, 450);
		building.desenhar(140, 450);
		building_floor.desenhar(138, 270);
		building_floor.desenhar(138, 150);

		
		//	Seu código vem aqui!
		//	...
		
		bb->animaGameObject();
		bb->mover(i_direcao_bb);
		bb->desenhaGameObject();
		//sp.desenhar(100, 100, 0);
		if (gTeclado.pressionou[TECLA_DIR])
			cama_elastica->mover(1);
		if (gTeclado.pressionou[TECLA_ESQ])
			cama_elastica->mover(-1);
		cama_elastica->desenhaGameObject();
		if(uniTestarColisao(bb->getSprite(), bb->getX(), bb->getY(), 0, 
			cama_elastica->getSprite(), cama_elastica->getX(), cama_elastica->getY(),0))
		{
			gDebug.depurar("Colisão", "colidiu");
			i_direcao_bb = -1;
		}
		if (bb->getY() < 300 && i_direcao_bb < 0)
			i_direcao_bb = 1;
		uniTerminarFrame();
	}
}

void Jogo::gerenciarWave(int wave)
{
	switch (wave)
	{
	case 1: {
		//lança 1 a cada intervalo de tempo;
		break;
		}
	case 2:
		{
			//lança 2 a cada intervalo de tempo;
		break;
		}
	case 3:
		{
			//lança 2 com intervalo de tempo entre os 2 em determinado intervalo de tempo.
		}
	}
}
bool Jogo::gravar(std::ostream& os) const {
	EstadoJogo ej_estado_jogo;
	if (os) {
		ej_estado_jogo.defineScore(this->score);
		ej_estado_jogo.defineWave(this->wave);
		ej_estado_jogo.defineVida(this->vida);
		os.write(reinterpret_cast<char *>(&ej_estado_jogo), sizeof(EstadoJogo));
		
	}else{
		return false;
		gDebug.erro("falha na stream");
	}
	return true;
}

bool Jogo::carregar(std::istream & is) {
	EstadoJogo ej_estado_jogo;
	if(is){
		is.read(reinterpret_cast<char *>(&ej_estado_jogo), sizeof(EstadoJogo));
		this->vida = ej_estado_jogo.obtemVida();
		this->score = ej_estado_jogo.obtemScore();
		this->wave = ej_estado_jogo.obtemWave();
		gDebug.depurar("vida", ej_estado_jogo.obtemVida());
		gDebug.depurar("score", ej_estado_jogo.obtemScore());
		gDebug.depurar("wave", ej_estado_jogo.obtemWave());
	}
	else{
		return false;
	}
	return true;
}
