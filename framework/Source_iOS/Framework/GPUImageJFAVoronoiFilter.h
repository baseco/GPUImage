#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageJFAVoronoiFilter : GPUImageFilter
{
    GLuint secondFilterOutputTexture;
    GLuint secondFilterFramebuffer;
    
    
    GLint sampleStepUniform;
    GLint sizeUniform;
    NSUInteger numPasses;
    
}

@property (nonatomic, readwrite) CGSize sizeInPixels;

@end