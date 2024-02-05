#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

/**
 * @brief A classe MainWindow é a janela principal da aplicação.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    /**
     * @brief Construtor da classe MainWindow.
     * @param parent O widget pai desta janela (padrão é nullptr).
     */
    explicit MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destrutor da classe MainWindow.
     */
    ~MainWindow();

private slots:
    /**
     * @brief Abre um widget na janela principal.
     * @param widget O widget a ser exibido na janela principal.
     */
    void openWidget(QWidget* widget);

private:
    Ui::MainWindow *ui; ///< A interface gráfica da janela principal.
    QWidget *currentWidget; ///< O widget atualmente exibido na janela principal.
};

#endif
