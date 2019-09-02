#pragma once
#include<vector>
#include"Shape.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class ShapePlacer
{
private:
	vector<Shape*> m_shapelist;
public:
	void AddNewShape(Shape* newshape);
	void VisualizeAllShapes();
	Shape* FÝndTheMostProperShape(double area);
	ShapePlacer();
	~ShapePlacer();
};

