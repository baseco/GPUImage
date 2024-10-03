#ifndef SWIFTPM
#import <GPUImage/GPUImagePixellateFilter.h>
#else
#import "GPUImagePixellateFilter.h"
#endif

@interface GPUImagePolkaDotFilter : GPUImagePixellateFilter
{
    GLint dotScalingUniform;
}

@property(readwrite, nonatomic) CGFloat dotScaling;

@end
