#ifndef IMAGE_RESIZER_H
#define IMAGE_RESIZER_H

#include "ImageEditor.h"
#include <QDialog>

namespace Ui {
class image_resizer;
}

class image_resizer : public QDialog
{
    Q_OBJECT

public:
    explicit image_resizer(ImageEditor &ref, int w = 1, int h = 1, QWidget *parent = nullptr);
    ~image_resizer();
    int gdc(int a, int b);

private slots:
    void on_spinWidth_valueChanged(int arg1);
    void on_spinHeight_valueChanged(int arg1);
    void on_checkBox_stateChanged(int arg1);
    void on_apply_btn_clicked();
    void on_cancel_btn_clicked();

private:
    Ui::image_resizer *ui;
    ImageEditor &mRef;
    int __Width = 0, __Height = 0;
    int mWidth = 0, mHeight = 0;
    bool checkRatio = false, changeValue = false;
};

#endif // IMAGE_RESIZER_H
