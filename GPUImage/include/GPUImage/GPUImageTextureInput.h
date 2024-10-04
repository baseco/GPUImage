#ifndef SWIFTPM
#import <GPUImage/GPUImageOutput.h>
#else
#import "GPUImageOutput.h"
#endif

@interface GPUImageTextureInput : GPUImageOutput
{
    CGSize textureSize;
}

// Initialization and teardown
- (id)initWithTexture:(GLuint)newInputTexture size:(CGSize)newTextureSize;

// Image rendering
- (void)processTextureWithFrameTime:(CMTime)frameTime;

@end
