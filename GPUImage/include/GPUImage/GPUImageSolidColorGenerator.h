#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

// This outputs an image with a constant color. You need to use -forceProcessingAtSize: in order to set the output image
// dimensions, or this won't work correctly


@interface GPUImageSolidColorGenerator : GPUImageFilter
{
    GLint colorUniform;
    GLint useExistingAlphaUniform;
}

// This color dictates what the output image will be filled with
@property(readwrite, nonatomic) GPUVector4 color;
@property(readwrite, nonatomic, assign) BOOL useExistingAlpha; // whether to use the alpha of the existing image or not, default is NO

- (void)setColorRed:(CGFloat)redComponent green:(CGFloat)greenComponent blue:(CGFloat)blueComponent alpha:(CGFloat)alphaComponent;

@end
