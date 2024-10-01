#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageExposureFilter : GPUImageFilter
{
    GLint exposureUniform;
}

// Exposure ranges from -10.0 to 10.0, with 0.0 as the normal level
@property(readwrite, nonatomic) CGFloat exposure; 

@end
