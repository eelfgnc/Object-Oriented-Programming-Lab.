#include "ShapePlacer.h"
void ShapePlacer::AddNewShape(Shape * newshape)
{
	m_shapelist.push_back(newshape);
}

void ShapePlacer::VisualizeAllShapes()
{
	for (int i = 0;i < m_shapelist.size();i++) {
		cout << m_shapelist[i]->GetShapeDescription() << endl;
	}
}

Shape * ShapePlacer::FÝndTheMostProperShape(double area)
{
	Shape *result = nullptr;
	double prev = INFINITY;
	for (int i = 0;i < m_shapelist.size();i++) {
		double Shapearea = m_shapelist[i]->CalculateSurfaceArea();
		if (Shapearea > area) continue;
		double areadif = area - Shapearea;
		if (areadif < Shapearea) {
			Shapearea = areadif;
			result = m_shapelist[i];
		}
	}
	return result;
}

ShapePlacer::ShapePlacer()
{
}


ShapePlacer::~ShapePlacer()
{
}
