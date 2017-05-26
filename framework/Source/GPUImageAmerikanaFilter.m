#import "GPUImageAmerikanaFilter.h"

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
NSString *const kGPUImageAmerikanaFragmentShaderString = SHADER_STRING
(
 varying highp vec2 textureCoordinate;
 
 uniform sampler2D inputImageTexture;
 
 uniform highp float crossHatchSpacing;
 uniform highp float lineWidth;
 
 const highp vec3 W = vec3(0.2125, 0.7154, 0.0721);
 
 void main()
 {
     highp float luminance = dot(texture2D(inputImageTexture, textureCoordinate).rgb, W);
     
     lowp vec4 colorToDisplay = vec4(226.0/255.0, 218.0/255.0, 225.0/255.0, 1.0);
     if (mod(textureCoordinate.x - textureCoordinate.y, crossHatchSpacing) <= lineWidth / 2.0)
     {
         colorToDisplay = vec4(164.0/255.0, 159.0/255.0, 196.0/255.0, 1.0);
     }
     if (luminance < 0.65)
     {
         colorToDisplay = vec4(164.0/255.0, 159.0/255.0, 196.0/255.0, 1.0);
     }
     if (luminance < 0.50)
     {
         colorToDisplay = vec4(220.0/255.0, 91.0/255.0, 106.0/255.0, 1.0);
     }
     if (luminance < 0.3)
     {
         colorToDisplay = vec4(59.0/255.0, 91.0/255.0, 167.0/255.0, 1.0);
     }
     
     gl_FragColor = colorToDisplay;
 }
 );
#else
NSString *const kGPUImageAmerikanaFragmentShaderString = SHADER_STRING
(
 varying vec2 textureCoordinate;
 
 uniform sampler2D inputImageTexture;
 
 uniform float crossHatchSpacing;
 uniform float lineWidth;
 
 const vec3 W = vec3(0.2125, 0.7154, 0.0721);
 
 void main()
 {
     float luminance = dot(texture2D(inputImageTexture, textureCoordinate).rgb, W);
     
     vec4 colorToDisplay = vec4(226.0/255.0, 218.0/255.0, 225.0/255.0, 1.0);
     if (mod(textureCoordinate.x - textureCoordinate.y, crossHatchSpacing) <= lineWidth / 2.0)
     {
         colorToDisplay = vec4(164.0/255.0, 159.0/255.0, 196.0/255.0, 1.0);
     }
     if (luminance < 0.65)
     {
         colorToDisplay = vec4(164.0/255.0, 159.0/255.0, 196.0/255.0, 1.0);
     }
     if (luminance < 0.50)
     {
         colorToDisplay = vec4(220.0/255.0, 91.0/255.0, 106.0/255.0, 1.0);
     }
     if (luminance < 0.3)
     {
         colorToDisplay = vec4(59.0/255.0, 91.0/255.0, 167.0/255.0, 1.0);
     }
     
     gl_FragColor = colorToDisplay;
 }
 );
#endif

@implementation GPUImageAmerikanaFilter

@synthesize crossHatchSpacing = _crossHatchSpacing;
@synthesize lineWidth = _lineWidth;

#pragma mark -
#pragma mark Initialization and teardown

- (id)init;
{
    if (!(self = [super initWithFragmentShaderFromString:kGPUImageAmerikanaFragmentShaderString]))
    {
        return nil;
    }
    
    crossHatchSpacingUniform = [filterProgram uniformIndex:@"crossHatchSpacing"];
    lineWidthUniform = [filterProgram uniformIndex:@"lineWidth"];
    
    self.crossHatchSpacing = 0.015;
    self.lineWidth = 0.004;
    
    return self;
}

#pragma mark -
#pragma mark Accessors

- (void)setCrossHatchSpacing:(CGFloat)newValue;
{
    CGFloat singlePixelSpacing;
    if (inputTextureSize.width != 0.0)
    {
        singlePixelSpacing = 1.0 / inputTextureSize.width;
    }
    else
    {
        singlePixelSpacing = 1.0 / 2048.0;
    }
    
    if (newValue < singlePixelSpacing)
    {
        _crossHatchSpacing = singlePixelSpacing;
    }
    else
    {
        _crossHatchSpacing = newValue;
    }
    
    [self setFloat:_crossHatchSpacing forUniform:crossHatchSpacingUniform program:filterProgram];
}

- (void)setLineWidth:(CGFloat)newValue;
{
    _lineWidth = newValue;
    
    [self setFloat:_lineWidth forUniform:lineWidthUniform program:filterProgram];
}

@end
