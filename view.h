#ifndef VIEW_H
#define VIEW_H
#include<QtWidgets/QGraphicsView>
#include<QtCharts/QChartGlobal>
#include<QtCharts/QChartView>

QT_BEGIN_NAMESPACE
class QMouseEvent;
class QResizeEvent;
class QGraphicsScene;
QT_END_NAMESPACE

QT_CHARTS_BEGIN_NAMESPACE
class QChart;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class View : public QGraphicsView
{
public:
    View(QWidget *parent=nullptr);
    void getData(QString str);

protected:
    void resizeEvent(QResizeEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    QGraphicsSimpleTextItem *timeX;
    QGraphicsSimpleTextItem *tempY;

    QChart *chart;

    QChartView *chartView;
};

#endif // VIEW_H
