#import "GPUImageAmericaFilter.h"

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
NSString *const kGPUImageAmericaFragmentShaderString = SHADER_STRING
(
 varying highp vec2 textureCoordinate;
 
 uniform sampler2D inputImageTexture;
 
 uniform highp float crossHatchSpacing;
 uniform highp float lineWidth;
 
 const highp vec3 W = vec3(0.2125, 0.7154, 0.0721);
 
 void main()
 {
     
     highp vec4 inputColor = texture2D(sTexture, vTextureCoord);
     highp vec4 darkBlue = vec4(.012, .195, .297, 1.0);
     highp vec4 mediumRed = vec4(0.824, 0.117, 0.164, 1.0);
     highp vec4 lightGray = vec4(0.492, 0.644, 0.679, 1.0);
     highp float luminance = dot(texture2D(inputImageTexture, textureCoordinate).rgb, W);
     
     lowp vec4 colorToDisplay = vec4(1.0, 0.941, 0.668, 1.0);
     if (mod(textureCoordinate.x + textureCoordinate.y, crossHatchSpacing) <= lineWidth / 2.0)
     {
         colorToDisplay = lightGray;
     }
     if (luminance < 0.65)
     {
         colorToDisplay = lightGray;
     }
     if (luminance < 0.50)
     {
         colorToDisplay = mediumRed;
     }
     if (luminance < 0.3)
     {
         colorToDisplay = darkBlue;
     }
     
     gl_FragColor = colorToDisplay;
 }
);
#else
NSString *const kGPUImageAmericaFragmentShaderString = SHADER_STRING
(
 varying vec2 textureCoordinate;
 
 uniform sampler2D inputImageTexture;
 
 uniform float crossHatchSpacing;
 uniform float lineWidth;
 
 const vec3 W = vec3(0.2125, 0.7154, 0.0721);
 
 void main()
 {
     highp vec4 inputColor = texture2D(sTexture, vTextureCoord);
     highp vec4 darkBlue = vec4(.012, .195, .297, 1.0);
     highp vec4 mediumRed = vec4(0.824, 0.117, 0.164, 1.0);
     highp vec4 lightGray = vec4(0.492, 0.644, 0.679, 1.0);
     highp float luminance = dot(texture2D(inputImageTexture, textureCoordinate).rgb, W);
     
     lowp vec4 colorToDisplay = vec4(1.0, 0.941, 0.668, 1.0);
     if (mod(textureCoordinate.x + textureCoordinate.y, crossHatchSpacing) <= lineWidth / 2.0)
     {
         colorToDisplay = lightGray;
     }
     if (luminance < 0.65)
     {
         colorToDisplay = lightGray;
     }
     if (luminance < 0.50)
     {
         colorToDisplay = mediumRed;
     }
     if (luminance < 0.3)
     {
         colorToDisplay = darkBlue;
     }
     
     gl_FragColor = colorToDisplay;
 }
 );
#endif

@interface GPUImageAmericaFilter ()
{
    GLint crossHatchSpacingUniform, lineWidthUniform;
    CGFloat crossHatchSpacing, lineWidth;
}

@end

@implementation GPUImageAmericaFilter


#pragma mark -
#pragma mark Initialization and teardown

- (id)init;
{
    if (!(self = [super initWithFragmentShaderFromString:kGPUImageAmericaFragmentShaderString]))
    {
        return nil;
    }
    
    crossHatchSpacingUniform = [filterProgram uniformIndex:@"crossHatchSpacing"];
    lineWidthUniform = [filterProgram uniformIndex:@"lineWidth"];
    
    crossHatchSpacing = 0.015;
    lineWidth = 0.004;
    
    return self;
}

@end
