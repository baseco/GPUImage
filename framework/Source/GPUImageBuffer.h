#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif

@interface GPUImageBuffer : GPUImageFilter
{
    NSMutableArray *bufferedFramebuffers;
}

@property(readwrite, nonatomic) NSUInteger bufferSize;

@end
