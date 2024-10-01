#ifndef SWIFTPM
#import <GPUImage/GPUImageTwoInputFilter.h>
#else
#import "GPUImageTwoInputFilter.h"
#endif

@interface GPUImageVoronoiConsumerFilter : GPUImageTwoInputFilter 
{
    GLint sizeUniform;
}

@property (nonatomic, readwrite) CGSize sizeInPixels;

@end
