#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianBlurFilter.h>
#else
#import "GPUImageGaussianBlurFilter.h"
#endif

// This filter merely performs the standard Gaussian blur on the red color channel (assuming a luminance image)

@interface GPUImageSingleComponentGaussianBlurFilter : GPUImageGaussianBlurFilter

@end
