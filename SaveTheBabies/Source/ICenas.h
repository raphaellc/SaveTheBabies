#pragma once

class ICenas
{
public:
	ICenas(){ };
	virtual ~ICenas();
	virtual void desenhar() = 0;
	virtual void input() = 0;
	virtual void atualizar() = 0;
	virtual ICenas * proxima() = 0;
	virtual bool terminouCena() = 0;
	virtual void defineProximaCena(ICenas * ic_cena) = 0;
	
 };

