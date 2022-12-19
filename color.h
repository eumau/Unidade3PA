#ifndef COLOR_H
#define COLOR_H

#include <QWidget>

/**
 * @brief Esta classe é responsavel pelas cores.
 */
class Color : public QWidget{
    Q_OBJECT
private:
    int r,g,b;
public:
    explicit Color(QWidget *parent = nullptr);
    /**
     * @brief cria o grid.
     */
    void paintEvent(QPaintEvent *event);
signals:

public slots:
    /**
     * @brief set_r muda a cor vermelha
     */
    void set_r(int _r);
    /**
     * @brief set_g muda a cor verde
     */
    void set_g(int _g);
    /**
     * @brief set_b muda a cor azul
     */
    void set_b(int _b);
};

#endif // COLOR_H
