#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageHistogramGenerator : GPUImageFilter
{
    GLint backgroundColorUniform;
}

@end
