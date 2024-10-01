#ifndef SWIFTPM
#import <GPUImage/GPUImageFilterGroup.h>
#else
#import "GPUImageFilterGroup.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLowPassFilter.h>
#else
#import "GPUImageLowPassFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDifferenceBlendFilter.h>
#else
#import "GPUImageDifferenceBlendFilter.h"
#endif

@interface GPUImageHighPassFilter : GPUImageFilterGroup
{
    GPUImageLowPassFilter *lowPassFilter;
    GPUImageDifferenceBlendFilter *differenceBlendFilter;
}

// This controls the degree by which the previous accumulated frames are blended and then subtracted from the current one. This ranges from 0.0 to 1.0, with a default of 0.5.
@property(readwrite, nonatomic) CGFloat filterStrength;

@end
