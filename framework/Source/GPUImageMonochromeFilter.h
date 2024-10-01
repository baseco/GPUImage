#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageMonochromeFilter : GPUImageFilter
{
    GLint intensityUniform, filterColorUniform;
}

@property(readwrite, nonatomic) CGFloat intensity;
@property(readwrite, nonatomic) GPUVector4 color;

- (void)setColorRed:(GLfloat)redComponent green:(GLfloat)greenComponent blue:(GLfloat)blueComponent;

@end
