#ifndef MSGRENDER_H
#define MSGRENDER_H

#include "Msg.h"
#include "../GraphicsContainer.h"
#include "../Math/PacMath.h"

class MsgRender : public Msg
{
private:
	GraphicsContainer* graphicsContainer;
protected:
public:
	MsgRender(GraphicsContainer* graphicsContainer) : Msg(RENDER)
	{
		this->graphicsContainer = graphicsContainer;
	}
	MsgRender(MsgRender* msg) : Msg(RENDER)
	{
		this->graphicsContainer = msg->getGraphicsContainer();
	}
	virtual ~MsgRender() {}

	GraphicsContainer* getGraphicsContainer() { return graphicsContainer; }
};

#endif //MSGRENDER_H