#ifndef PARTICLEFILTER_PARTICLEFILTER_H
#define PARTICLEFILTER_PARTICLEFILTER_H

#include <vector>
using namespace std;

class Scene;

struct ParticleType	{
	int			position[3];		// [x, y, z]
	double		azimuth;
	double 		elevation;
	double		weight;
	double		oldweight;
};

class ParticleFilter {
public:
    ParticleFilter(void);
    ~ParticleFilter(void);
    void initialize(Scene* scene);

private:
    void update();

    //Graphics^ g;
	//Pen^ _skyBluePen;
	//Pen^ _RedPen;
	//Pen^ _BlackPen;

	Scene *sceneMain;

	//Projector^ _Proj;

	vector<ParticleType*>* _OldSampleVec;
	vector<ParticleType*>* _NewSampleVec;

	double *_RangeOfScene;
	double *_SceneSize;

	int _sampleNum;
	double _threshold;
	double _variance;

	int _Length;
	int _Width;
	int _Height;
};

#endif