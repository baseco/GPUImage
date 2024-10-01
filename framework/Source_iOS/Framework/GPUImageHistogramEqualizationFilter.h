//
//  GPUImageHistogramEqualizationFilter.h
//  FilterShowcase
//
//  Created by Adam Marcus on 19/08/2014.
//  Copyright (c) 2014 Sunset Lake Software LLC. All rights reserved.
//

#ifndef SWIFTPM
#import <GPUImage/GPUImageFilterGroup.h>
#else
#import "GPUImageFilterGroup.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHistogramFilter.h>
#else
#import "GPUImageHistogramFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRawDataOutput.h>
#else
#import "GPUImageRawDataOutput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRawDataInput.h>
#else
#import "GPUImageRawDataInput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTwoInputFilter.h>
#else
#import "GPUImageTwoInputFilter.h"
#endif

@interface GPUImageHistogramEqualizationFilter : GPUImageFilterGroup
{
    GPUImageHistogramFilter *histogramFilter;
    GPUImageRawDataOutput *rawDataOutputFilter;
    GPUImageRawDataInput *rawDataInputFilter;
}

@property(readwrite, nonatomic) NSUInteger downsamplingFactor;

- (id)initWithHistogramType:(GPUImageHistogramType)newHistogramType;

@end
