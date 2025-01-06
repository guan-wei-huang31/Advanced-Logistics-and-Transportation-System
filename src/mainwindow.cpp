#include "mainwindow.h"
#include "mapping.h"
#include "./ui_mainwindow.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QColor>
#include <QPen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , scene(new QGraphicsScene(this))
{
    ui->setupUi(this);

    QGraphicsView* view = findChild<QGraphicsView*>("graphicsView");
    if (view) {
        view->setScene(scene); // 將場景附加到視圖
    }

    // 創建地圖並繪製
    baseMap = populateMap(); // 獲取地圖數據
    // Define and add multiple routes to the base map
    struct Route routes[] = { getBlueRoute(), getGreenRoute(), getYellowRoute() };
    struct Map finalMap = addMultipleRoutes(&baseMap, routes, NUM_ROUTES);

    drawMapInScene(scene, &finalMap, 0); // 在場景中繪製地圖
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btmSearch_clicked(){
    weight = ui->lineEdit_Weight->text().toDouble();
    size = ui->lineEdit_Size->text().toDouble();
    xAxis = ui->lineEdit_X->text().toInt();
    yAxis = ui->lineEdit_Y->text();

    QString result = "Blue";
    ui->label_Result->setText(result);

    int validTruckIndex = findTruckForShipment(baseMap, trucks, NUM_ROUTES, cargo);



    qDebug() << "Weight:" << weight
             << "Size:" << size
             << "X:" << xAxis
             << "Y:" << yAxis;
}
