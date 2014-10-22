#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <GL/glew.h>

#include <QGLWidget>
//#include "convolutiontool.h"


//! [0]
class GLWidget : public QGLWidget
{
  Q_OBJECT

public:
  GLWidget(QWidget *parent = 0);
  ~GLWidget();

  QSize minimumSizeHint() const;
  QSize sizeHint() const;

  //! [2]
protected:
  void initializeGL();
  void paintGL();
  void resizeGL(int width, int height);
  //! [2]

  //! [3]
private:
};
//! [3]

#endif
