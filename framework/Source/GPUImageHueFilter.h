
#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageHueFilter : GPUImageFilter
{
    GLint hueAdjustUniform;
    
}
@property (nonatomic, readwrite) CGFloat hue;

@end
