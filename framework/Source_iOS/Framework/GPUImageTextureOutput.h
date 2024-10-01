#import <Foundation/Foundation.h>
#ifndef SWIFTPM
#import <GPUImage/GPUImageContext.h>
#else
#import "GPUImageContext.h"
#endif

@protocol GPUImageTextureOutputDelegate;

@interface GPUImageTextureOutput : NSObject <GPUImageInput>
{
    GPUImageFramebuffer *firstInputFramebuffer;
}

@property(readwrite, unsafe_unretained, nonatomic) id<GPUImageTextureOutputDelegate> delegate;
@property(readonly) GLuint texture;
@property(nonatomic) BOOL enabled;

- (void)doneWithTexture;

@end

@protocol GPUImageTextureOutputDelegate
- (void)newFrameReadyFromTextureOutput:(GPUImageTextureOutput *)callbackTextureOutput;
@end
