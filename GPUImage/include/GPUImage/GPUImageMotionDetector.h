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
#import <GPUImage/GPUImageAverageColor.h>
#else
#import "GPUImageAverageColor.h"
#endif

@interface GPUImageMotionDetector : GPUImageFilterGroup
{
    GPUImageLowPassFilter *lowPassFilter;
    GPUImageTwoInputFilter *frameComparisonFilter;
    GPUImageAverageColor *averageColor;
}

// This controls the low pass filter strength used to compare the current frame with previous ones to detect motion. This ranges from 0.0 to 1.0, with a default of 0.5.
@property(readwrite, nonatomic) CGFloat lowPassFilterStrength;

// For every frame, this will feed back the calculated centroid of the motion, as well as a relative intensity.
@property(nonatomic, copy) void(^motionDetectionBlock)(CGPoint motionCentroid, CGFloat motionIntensity, CMTime frameTime);

@end
