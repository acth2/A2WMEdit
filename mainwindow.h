#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QPlainTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QFileSystemModel>
#include <QTreeView>
#include <QSplitter>
#include <QResizeEvent>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void createTab();

private slots:

    void on_actionNew_triggered();

    void on_actionSave_as_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionQuit_triggered();

    void on_actionClose_file_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void closeTab(int index);

    void on_actionAbout_Fadyedit_triggered();

    void on_actionOpen_folder_triggered();

    void openTreeViewFile(QModelIndex index);

    void openNewTabTreeViewFile(QModelIndex index);

    void openTabFile(QString filePath);

    QPlainTextEdit* currentTextEdit();

    QLabel* currentStatus();

private:
    Ui::MainWindow *ui;

    QHBoxLayout *mainLayout = new QHBoxLayout;
    QSplitter *window = new QSplitter(this);
    QFileSystemModel *dirModel = new QFileSystemModel(this);
    QTreeView *treeView = new QTreeView;

    QTabWidget *tabsWidget = new QTabWidget(this);
};
#endif // MAINWINDOW_H
