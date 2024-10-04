#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianBlurFilter.h>
#else
#import "GPUImageGaussianBlurFilter.h"
#endif

/** A hardware-accelerated box blur of an image
 */
@interface GPUImageBoxBlurFilter : GPUImageGaussianBlurFilter

@end
