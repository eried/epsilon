#ifndef POINCARE_SYMBOL_LAYOUT_H
#define POINCARE_SYMBOL_LAYOUT_H

#include <poincare/expression.h>
#include <poincare/expression_layout.h>

class SymbolLayout : public ExpressionLayout {
public:
  SymbolLayout(ExpressionLayout * lowerBoundLayout, ExpressionLayout * upperBoundLayout, ExpressionLayout * argumentLayout);
  ~SymbolLayout();
  constexpr static KDCoordinate k_symbolHeight = 15;
  constexpr static KDCoordinate k_symbolWidth = 9;
protected:
  constexpr static KDCoordinate k_boundHeightMargin = 2;
  ExpressionLayout * m_lowerBoundLayout;
  ExpressionLayout * m_upperBoundLayout;
  ExpressionLayout * m_argumentLayout;
private:
  KDSize computeSize() override;
  ExpressionLayout * child(uint16_t index) override;
  KDPoint positionOfChild(ExpressionLayout * child) override;
  constexpr static KDCoordinate k_argumentWidthMargin = 2;
};

#endif
