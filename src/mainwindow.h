#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "mapping.h"
#include "datastructure.h"

class QGraphicsView; // 前置聲明
class QGraphicsScene;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btmSearch_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    struct Map baseMap;
    struct Truck trucks;
    double weight;
    double size;
    int xAxis;
    QString yAxis;
};
#endif // MAINWINDOW_H
