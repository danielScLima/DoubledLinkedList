#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "doubledlinkedlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*!
 * \brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief MainWindow
     * \param parent
     */
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    /*!
     * \brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

    /*!
     * \brief on_pushButton_2_clicked
     */
    void on_pushButton_2_clicked();

    /*!
     * \brief on_pushButton_3_clicked
     */
    void on_pushButton_3_clicked();

    /*!
     * \brief on_pushButton_4_clicked
     */
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    DoubledLinkedList doubledLinkedList;

    /*!
     * \brief updateDotFile
     */
    void updateDotFile();

    /*!
     * \brief updateImage
     */
    void updateImage();

    /*!
     * \brief renderImage
     */
    void renderImage();
};
#endif // MAINWINDOW_H
