#ifndef SWIFTPM
#import <GPUImage/GPUImageTwoPassTextureSamplingFilter.h>
#else
#import "GPUImageTwoPassTextureSamplingFilter.h"
#endif

@interface GPUImageLanczosResamplingFilter : GPUImageTwoPassTextureSamplingFilter

@property(readwrite, nonatomic) CGSize originalImageSize;

@end
