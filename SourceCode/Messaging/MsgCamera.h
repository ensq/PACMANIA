#ifndef MSGCAMERA_H
#define MSGCAMERA_H

#include "Msg.h"
#include "../Math/PacMath.h"

class MsgCamera : public Msg
{
private:
	MatF4 view;
	MatF4 proj;
protected:
public:
	MsgCamera(MatF4 view, MatF4 proj) : Msg(CAMERA)
	{
		this->view = view;
		this->proj = proj;
	}
	MsgCamera(MsgCamera* msgCamera) : Msg(CAMERA)
	{
		view = msgCamera->View();
		proj = msgCamera->Proj();
	}
	virtual ~MsgCamera() {}

	MatF4 View() { return view; }
	MatF4 Proj() { return proj; }
};

/*
class MsgCamera : public Msg
{
private:
	MatF4 view;
	MatF4 proj;

	VecF3 look;
protected:
public:
	MsgCamera(MatF4 view, MatF4 proj, VecF3 look) : Msg(CAMERA)
	{
		this->view = view;
		this->proj = proj;
		this->look = look;
	}
	MsgCamera(MsgCamera* msgCamera) : Msg(CAMERA)
	{
		view = msgCamera->View();
		proj = msgCamera->Proj();
		look = msgCamera->Look();
	}
	virtual ~MsgCamera() {}

	MatF4 View() { return view; }
	MatF4 Proj() { return proj; }

	VecF3 Look() { return look; }
};
*/

#endif //MSGCAMERA_H