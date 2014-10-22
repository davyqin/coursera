//#include <GL/glu.h>
#include "GLWidget.h"

using namespace std;

GLWidget::GLWidget( QWidget *parent)
  : QGLWidget( parent)
{
}

GLWidget::~GLWidget() {
}

QSize GLWidget::minimumSizeHint() const
{
  return QSize(100, 100);
}

QSize GLWidget::sizeHint() const
{
  return QSize(512, 512);
}
#if 0
void GLWidget::setZoomFactor(int zoom) {
  zoomFactor = 0.1 * zoom;
  updateGL();
}

void GLWidget::horEnhancedImage(bool bShow) {
  if (bShow) {
    delete [] pData;
    unsigned char* source = pDataOld;
    pData = convolution.horEnhance(source, ImageWidth, ImageHeight);
  }

  updateGL();
}

void GLWidget::verEnhancedImage(bool bShow) {
  if (bShow) {
    delete [] pData;
    unsigned char* source = pDataOld;
    pData = convolution.verEnhance(source, ImageWidth, ImageHeight);
  }

  updateGL();
}

void GLWidget::fullEnhancedImage(bool bShow) {
  if (bShow) {
    delete [] pData;
    unsigned char* source = pDataOld;
    pData = convolution.fullEnhance(source, ImageWidth, ImageHeight);
  }

  updateGL();
}

void GLWidget::oriImage(bool bShow) {
  if (bShow) {
    delete [] pData;
    pData = image.pixel();
  }

  updateGL();
}
#endif
void GLWidget::initializeGL(void)
{
  glewExperimental = GL_TRUE;
  glewInit();
#if 0
  glClearColor (0.0, 0.0, 0.0, 0.0);
  glShadeModel(GL_FLAT);
  glPixelStorei(GL_UNPACK_ALIGNMENT, alignment);
#endif
}

void GLWidget::paintGL(void)
{
#if 0
  glClear(GL_COLOR_BUFFER_BIT);
  glRasterPos2i (screenx, screeny);
  glPixelZoom (zoomFactor, zoomFactor);
  glDrawPixels(ImageWidth,  ImageHeight, GL_LUMINANCE, GL_UNSIGNED_BYTE, pData);
  glFlush ();
#endif
}

void GLWidget::resizeGL(int width, int height)
{
#if 0
  int w = width;
  int h = height;
  glViewport(0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0, (GLdouble) w, 0.0, (GLdouble) h);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
#endif
}
