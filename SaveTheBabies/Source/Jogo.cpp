#include "Jogo.h"

Jogo::Jogo()
{
	
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	//	...
	
	this->f_mapa_assets.open("..\\mapa_assets.txt", ios::in);
	if (!f_mapa_assets) {
		gDebug.erro("não abriu arquivo", this);
	}
	//Carregar Recursos
	CarregadorDeAssets * cda_carregador_assets = new CarregadorDeAssets;
	if(!cda_carregador_assets->carregarRecursos(f_mapa_assets)){
		gDebug.erro("Falha no carregamento de recursos");
	}
	
	gRecursos.getSpriteSheet("baby")->setNumFramesDaAnimacao(0, 4);
	int anim = gRecursos.getSpriteSheet("baby")->adicionarAnimacao(0, 12, 10, 50);
	bb.setSpriteSheet("baby");
	bb.setPos(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	bb.setVelociadade(0.1);

	//Carregar Recursos do Prédio
	building.setSpriteSheet("building");
	fire_back.setSpriteSheet("fire_background");
	building_floor.setSpriteSheet("building_floor1");

	//Carregar Bombeiros
	cama_elastica.setSpriteSheet("cama_elastica");
	cama_elastica.setPosicaoGameObject(300,500);
	
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
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		fire_back.desenhar(0, 450);
		building.desenhar(140, 450);
		building_floor.desenhar(138, 270);
		building_floor.desenhar(138, 150);

		
		//	Seu código vem aqui!
		//	...
		bb.animarBebe();
		bb.mover(1);
		bb.desenharBebe();
		//sp.desenhar(100, 100, 0);
		if (gTeclado.pressionou[TECLA_DIR])
			cama_elastica.mover(1);
		if (gTeclado.pressionou[TECLA_ESQ])
			cama_elastica.mover(-1);
		cama_elastica.desenhaGameObject();

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
