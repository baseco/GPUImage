#import <Cocoa/Cocoa.h>
#ifndef SWIFTPM
#import <GPUImage/GPUImageOutput.h>
#else
#import "GPUImageOutput.h"
#endif

@interface GPUImagePicture : GPUImageOutput
{
    CGSize pixelSizeOfImage;
    BOOL hasProcessedImage;
    
    dispatch_semaphore_t imageUpdateSemaphore;
}

// Initialization and teardown
- (id)initWithURL:(NSURL *)url;
- (id)initWithImage:(NSImage *)newImageSource;
- (id)initWithCGImage:(CGImageRef)newImageSource;
- (id)initWithImage:(NSImage *)newImageSource smoothlyScaleOutput:(BOOL)smoothlyScaleOutput;
- (id)initWithCGImage:(CGImageRef)newImageSource smoothlyScaleOutput:(BOOL)smoothlyScaleOutput;

// Image rendering
- (void)processImage;
- (BOOL)processImageWithCompletionHandler:(void (^)(void))completion;
- (void)processImageUpToFilter:(GPUImageOutput<GPUImageInput> *)finalFilterInChain withCompletionHandler:(void (^)(NSImage *processedImage))block;
- (CGSize)outputImageSize;

@end
