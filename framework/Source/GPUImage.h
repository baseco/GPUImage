#ifndef SWIFTPM
#import <GPUImage/GLProgram.h>
#else
#import "GLProgram.h"
#endif

// Base classes
#ifndef SWIFTPM
#import <GPUImage/GPUImageContext.h>
#else
#import "GPUImageContext.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageOutput.h>
#else
#import "GPUImageOutput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageView.h>
#else
#import "GPUImageView.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageVideoCamera.h>
#else
#import "GPUImageVideoCamera.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageStillCamera.h>
#else
#import "GPUImageStillCamera.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMovie.h>
#else
#import "GPUImageMovie.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePicture.h>
#else
#import "GPUImagePicture.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRawDataInput.h>
#else
#import "GPUImageRawDataInput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRawDataOutput.h>
#else
#import "GPUImageRawDataOutput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMovieWriter.h>
#else
#import "GPUImageMovieWriter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFilterPipeline.h>
#else
#import "GPUImageFilterPipeline.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTextureOutput.h>
#else
#import "GPUImageTextureOutput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFilterGroup.h>
#else
#import "GPUImageFilterGroup.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTextureInput.h>
#else
#import "GPUImageTextureInput.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageUIElement.h>
#else
#import "GPUImageUIElement.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageBuffer.h>
#else
#import "GPUImageBuffer.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFramebuffer.h>
#else
#import "GPUImageFramebuffer.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFramebufferCache.h>
#else
#import "GPUImageFramebufferCache.h"
#endif

// Filters
#ifndef SWIFTPM
#import <GPUImage/GPUImageFilter.h>
#else
#import "GPUImageFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTwoInputFilter.h>
#else
#import "GPUImageTwoInputFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePixellateFilter.h>
#else
#import "GPUImagePixellateFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePixellatePositionFilter.h>
#else
#import "GPUImagePixellatePositionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSepiaFilter.h>
#else
#import "GPUImageSepiaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorInvertFilter.h>
#else
#import "GPUImageColorInvertFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSaturationFilter.h>
#else
#import "GPUImageSaturationFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageContrastFilter.h>
#else
#import "GPUImageContrastFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageExposureFilter.h>
#else
#import "GPUImageExposureFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageBrightnessFilter.h>
#else
#import "GPUImageBrightnessFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLevelsFilter.h>
#else
#import "GPUImageLevelsFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSharpenFilter.h>
#else
#import "GPUImageSharpenFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGammaFilter.h>
#else
#import "GPUImageGammaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSobelEdgeDetectionFilter.h>
#else
#import "GPUImageSobelEdgeDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSketchFilter.h>
#else
#import "GPUImageSketchFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageToonFilter.h>
#else
#import "GPUImageToonFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSmoothToonFilter.h>
#else
#import "GPUImageSmoothToonFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMultiplyBlendFilter.h>
#else
#import "GPUImageMultiplyBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDissolveBlendFilter.h>
#else
#import "GPUImageDissolveBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageKuwaharaFilter.h>
#else
#import "GPUImageKuwaharaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageKuwaharaRadius3Filter.h>
#else
#import "GPUImageKuwaharaRadius3Filter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageVignetteFilter.h>
#else
#import "GPUImageVignetteFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianBlurFilter.h>
#else
#import "GPUImageGaussianBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianBlurPositionFilter.h>
#else
#import "GPUImageGaussianBlurPositionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianSelectiveBlurFilter.h>
#else
#import "GPUImageGaussianSelectiveBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageOverlayBlendFilter.h>
#else
#import "GPUImageOverlayBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDarkenBlendFilter.h>
#else
#import "GPUImageDarkenBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLightenBlendFilter.h>
#else
#import "GPUImageLightenBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSwirlFilter.h>
#else
#import "GPUImageSwirlFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSourceOverBlendFilter.h>
#else
#import "GPUImageSourceOverBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorBurnBlendFilter.h>
#else
#import "GPUImageColorBurnBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorDodgeBlendFilter.h>
#else
#import "GPUImageColorDodgeBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageScreenBlendFilter.h>
#else
#import "GPUImageScreenBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageExclusionBlendFilter.h>
#else
#import "GPUImageExclusionBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDifferenceBlendFilter.h>
#else
#import "GPUImageDifferenceBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSubtractBlendFilter.h>
#else
#import "GPUImageSubtractBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHardLightBlendFilter.h>
#else
#import "GPUImageHardLightBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSoftLightBlendFilter.h>
#else
#import "GPUImageSoftLightBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorBlendFilter.h>
#else
#import "GPUImageColorBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHueBlendFilter.h>
#else
#import "GPUImageHueBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSaturationBlendFilter.h>
#else
#import "GPUImageSaturationBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLuminosityBlendFilter.h>
#else
#import "GPUImageLuminosityBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageCropFilter.h>
#else
#import "GPUImageCropFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGrayscaleFilter.h>
#else
#import "GPUImageGrayscaleFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTransformFilter.h>
#else
#import "GPUImageTransformFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageChromaKeyBlendFilter.h>
#else
#import "GPUImageChromaKeyBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHazeFilter.h>
#else
#import "GPUImageHazeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLuminanceThresholdFilter.h>
#else
#import "GPUImageLuminanceThresholdFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePosterizeFilter.h>
#else
#import "GPUImagePosterizeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageBoxBlurFilter.h>
#else
#import "GPUImageBoxBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAdaptiveThresholdFilter.h>
#else
#import "GPUImageAdaptiveThresholdFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSolarizeFilter.h>
#else
#import "GPUImageSolarizeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageUnsharpMaskFilter.h>
#else
#import "GPUImageUnsharpMaskFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageBulgeDistortionFilter.h>
#else
#import "GPUImageBulgeDistortionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePinchDistortionFilter.h>
#else
#import "GPUImagePinchDistortionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageCrosshatchFilter.h>
#else
#import "GPUImageCrosshatchFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageCGAColorspaceFilter.h>
#else
#import "GPUImageCGAColorspaceFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePolarPixellateFilter.h>
#else
#import "GPUImagePolarPixellateFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageStretchDistortionFilter.h>
#else
#import "GPUImageStretchDistortionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePerlinNoiseFilter.h>
#else
#import "GPUImagePerlinNoiseFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageJFAVoronoiFilter.h>
#else
#import "GPUImageJFAVoronoiFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageVoronoiConsumerFilter.h>
#else
#import "GPUImageVoronoiConsumerFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMosaicFilter.h>
#else
#import "GPUImageMosaicFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTiltShiftFilter.h>
#else
#import "GPUImageTiltShiftFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImage3x3ConvolutionFilter.h>
#else
#import "GPUImage3x3ConvolutionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageEmbossFilter.h>
#else
#import "GPUImageEmbossFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageCannyEdgeDetectionFilter.h>
#else
#import "GPUImageCannyEdgeDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageThresholdEdgeDetectionFilter.h>
#else
#import "GPUImageThresholdEdgeDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMaskFilter.h>
#else
#import "GPUImageMaskFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHistogramFilter.h>
#else
#import "GPUImageHistogramFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHistogramGenerator.h>
#else
#import "GPUImageHistogramGenerator.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHistogramEqualizationFilter.h>
#else
#import "GPUImageHistogramEqualizationFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePrewittEdgeDetectionFilter.h>
#else
#import "GPUImagePrewittEdgeDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageXYDerivativeFilter.h>
#else
#import "GPUImageXYDerivativeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHarrisCornerDetectionFilter.h>
#else
#import "GPUImageHarrisCornerDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAlphaBlendFilter.h>
#else
#import "GPUImageAlphaBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageNormalBlendFilter.h>
#else
#import "GPUImageNormalBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageNonMaximumSuppressionFilter.h>
#else
#import "GPUImageNonMaximumSuppressionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRGBFilter.h>
#else
#import "GPUImageRGBFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMedianFilter.h>
#else
#import "GPUImageMedianFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageBilateralFilter.h>
#else
#import "GPUImageBilateralFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageCrosshairGenerator.h>
#else
#import "GPUImageCrosshairGenerator.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageToneCurveFilter.h>
#else
#import "GPUImageToneCurveFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageNobleCornerDetectionFilter.h>
#else
#import "GPUImageNobleCornerDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageShiTomasiFeatureDetectionFilter.h>
#else
#import "GPUImageShiTomasiFeatureDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageErosionFilter.h>
#else
#import "GPUImageErosionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRGBErosionFilter.h>
#else
#import "GPUImageRGBErosionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDilationFilter.h>
#else
#import "GPUImageDilationFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRGBDilationFilter.h>
#else
#import "GPUImageRGBDilationFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageOpeningFilter.h>
#else
#import "GPUImageOpeningFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRGBOpeningFilter.h>
#else
#import "GPUImageRGBOpeningFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageClosingFilter.h>
#else
#import "GPUImageClosingFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageRGBClosingFilter.h>
#else
#import "GPUImageRGBClosingFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorPackingFilter.h>
#else
#import "GPUImageColorPackingFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSphereRefractionFilter.h>
#else
#import "GPUImageSphereRefractionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMonochromeFilter.h>
#else
#import "GPUImageMonochromeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageOpacityFilter.h>
#else
#import "GPUImageOpacityFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHighlightShadowFilter.h>
#else
#import "GPUImageHighlightShadowFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFalseColorFilter.h>
#else
#import "GPUImageFalseColorFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHSBFilter.h>
#else
#import "GPUImageHSBFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHueFilter.h>
#else
#import "GPUImageHueFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGlassSphereFilter.h>
#else
#import "GPUImageGlassSphereFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLookupFilter.h>
#else
#import "GPUImageLookupFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAmatorkaFilter.h>
#else
#import "GPUImageAmatorkaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMissEtikateFilter.h>
#else
#import "GPUImageMissEtikateFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSoftEleganceFilter.h>
#else
#import "GPUImageSoftEleganceFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAddBlendFilter.h>
#else
#import "GPUImageAddBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDivideBlendFilter.h>
#else
#import "GPUImageDivideBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePolkaDotFilter.h>
#else
#import "GPUImagePolkaDotFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLocalBinaryPatternFilter.h>
#else
#import "GPUImageLocalBinaryPatternFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorLocalBinaryPatternFilter.h>
#else
#import "GPUImageColorLocalBinaryPatternFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLanczosResamplingFilter.h>
#else
#import "GPUImageLanczosResamplingFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAverageColor.h>
#else
#import "GPUImageAverageColor.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSolidColorGenerator.h>
#else
#import "GPUImageSolidColorGenerator.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLuminosity.h>
#else
#import "GPUImageLuminosity.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAverageLuminanceThresholdFilter.h>
#else
#import "GPUImageAverageLuminanceThresholdFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageWhiteBalanceFilter.h>
#else
#import "GPUImageWhiteBalanceFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageChromaKeyFilter.h>
#else
#import "GPUImageChromaKeyFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLowPassFilter.h>
#else
#import "GPUImageLowPassFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHighPassFilter.h>
#else
#import "GPUImageHighPassFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMotionDetector.h>
#else
#import "GPUImageMotionDetector.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHalftoneFilter.h>
#else
#import "GPUImageHalftoneFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageThresholdedNonMaximumSuppressionFilter.h>
#else
#import "GPUImageThresholdedNonMaximumSuppressionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageHoughTransformLineDetector.h>
#else
#import "GPUImageHoughTransformLineDetector.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageParallelCoordinateLineTransformFilter.h>
#else
#import "GPUImageParallelCoordinateLineTransformFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageThresholdSketchFilter.h>
#else
#import "GPUImageThresholdSketchFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLineGenerator.h>
#else
#import "GPUImageLineGenerator.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLinearBurnBlendFilter.h>
#else
#import "GPUImageLinearBurnBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageGaussianBlurPositionFilter.h>
#else
#import "GPUImageGaussianBlurPositionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePixellatePositionFilter.h>
#else
#import "GPUImagePixellatePositionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageTwoInputCrossTextureSamplingFilter.h>
#else
#import "GPUImageTwoInputCrossTextureSamplingFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImagePoissonBlendFilter.h>
#else
#import "GPUImagePoissonBlendFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageMotionBlurFilter.h>
#else
#import "GPUImageMotionBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageZoomBlurFilter.h>
#else
#import "GPUImageZoomBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLaplacianFilter.h>
#else
#import "GPUImageLaplacianFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageiOSBlurFilter.h>
#else
#import "GPUImageiOSBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageLuminanceRangeFilter.h>
#else
#import "GPUImageLuminanceRangeFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDirectionalNonMaximumSuppressionFilter.h>
#else
#import "GPUImageDirectionalNonMaximumSuppressionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageDirectionalSobelEdgeDetectionFilter.h>
#else
#import "GPUImageDirectionalSobelEdgeDetectionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageSingleComponentGaussianBlurFilter.h>
#else
#import "GPUImageSingleComponentGaussianBlurFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageThreeInputFilter.h>
#else
#import "GPUImageThreeInputFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageFourInputFilter.h>
#else
#import "GPUImageFourInputFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageWeakPixelInclusionFilter.h>
#else
#import "GPUImageWeakPixelInclusionFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColorConversion.h>
#else
#import "GPUImageColorConversion.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColourFASTFeatureDetector.h>
#else
#import "GPUImageColourFASTFeatureDetector.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageColourFASTSamplingOperation.h>
#else
#import "GPUImageColourFASTSamplingOperation.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAmericaFilter.h>
#else
#import "GPUImageAmericaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAmerikanaFilter.h>
#else
#import "GPUImageAmerikanaFilter.h"
#endif
#ifndef SWIFTPM
#import <GPUImage/GPUImageAndyFilter.h>
#else
#import "GPUImageAndyFilter.h"
#endif

