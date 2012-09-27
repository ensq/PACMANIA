#ifndef CAMERADX_H
#define CAMERADX_H

#include "../Camera.h"

class CameraDX : public Camera
{
private:
public:

	CameraDX(float aspect, float fov, float zf, float zn);
	virtual ~CameraDX();

	virtual void mouse(const int dX, const int dY);
	virtual void keyboard(KEY key);

	virtual void updateView();
	virtual void updateProj();

	virtual void strafe(const float velocity);
	virtual void walk(const float velocity);
	virtual void pitch(const float angle);
	virtual void yaw(const float angle);
};

#endif //CAMERADX_H