#ifndef APPS_MEMOIZED_CURVE_VIEW_RANGE_H
#define APPS_MEMOIZED_CURVE_VIEW_RANGE_H

#include "curve_view_range.h"


class MemoizedCurveViewRange : public CurveViewRange {
public:
  MemoizedCurveViewRange();
  //CurveViewWindow
  float xMin() override;
  float xMax() override;
  float yMin() override;
  float yMax() override;
  float xGridUnit() override;
  float yGridUnit() override;
  virtual void setXMin(float f);
  virtual void setXMax(float f);
  void setYMin(float f);
  void setYMax(float f);

protected:
  // Window bounds of the data
  float m_xMin;
  float m_xMax;
  float m_yMin;
  float m_yMax;
  float m_xGridUnit;
  float m_yGridUnit;
};

#endif
