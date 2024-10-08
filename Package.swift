// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "GPUImage",
    defaultLocalization: "en",
    platforms: [
        .iOS(.v12),
        .macOS(.v10_15)
    ],
    products: [
        .library(
            name: "GPUImage",
            targets: ["GPUImage"]
        ),
    ],
    dependencies: [
        // No external dependencies
    ],
    targets: [
        .target(
            name: "GPUImage",
            path: "GPUImage",
          
            sources: [
                "GPUImageContext.m",
                "GPUImageMovieWriter.m",
                "GPUImagePicture+TextureSubimage.m",
                "GPUImagePicture.m",
                "GPUImageView.m",
                "GLProgram.m",
                "GPUImage3x3ConvolutionFilter.m",
                "GPUImage3x3TextureSamplingFilter.m",
                "GPUImageAdaptiveThresholdFilter.m",
                "GPUImageAddBlendFilter.m",
                "GPUImageAlphaBlendFilter.m",
                "GPUImageAmatorkaFilter.m",
                "GPUImageAmericaFilter.m",
                "GPUImageAmerikanaFilter.m",
                "GPUImageAndyFilter.m",
                "GPUImageAverageColor.m",
                "GPUImageAverageLuminanceThresholdFilter.m",
                "GPUImageBilateralFilter.m",
                "GPUImageBoxBlurFilter.m",
                "GPUImageBrightnessFilter.m",
                "GPUImageBuffer.m",
                "GPUImageBulgeDistortionFilter.m",
                "GPUImageCGAColorspaceFilter.m",
                "GPUImageCannyEdgeDetectionFilter.m",
                "GPUImageChromaKeyBlendFilter.m",
                "GPUImageChromaKeyFilter.m",
                "GPUImageClosingFilter.m",
                "GPUImageColorBlendFilter.m",
                "GPUImageColorBurnBlendFilter.m",
                "GPUImageColorConversion.m",
                "GPUImageColorDodgeBlendFilter.m",
                "GPUImageColorInvertFilter.m",
                "GPUImageColorLocalBinaryPatternFilter.m",
                "GPUImageColorMatrixFilter.m",
                "GPUImageColorPackingFilter.m",
                "GPUImageColourFASTFeatureDetector.m",
                "GPUImageColourFASTSamplingOperation.m",
                "GPUImageContrastFilter.m",
                "GPUImageCropFilter.m",
                "GPUImageCrosshairGenerator.m",
                "GPUImageCrosshatchFilter.m",
                "GPUImageDarkenBlendFilter.m",
                "GPUImageDifferenceBlendFilter.m",
                "GPUImageDilationFilter.m",
                "GPUImageDirectionalNonMaximumSuppressionFilter.m",
                "GPUImageDirectionalSobelEdgeDetectionFilter.m",
                "GPUImageDissolveBlendFilter.m",
                "GPUImageDivideBlendFilter.m",
                "GPUImageEmbossFilter.m",
                "GPUImageErosionFilter.m",
                "GPUImageExclusionBlendFilter.m",
                "GPUImageExposureFilter.m",
                "GPUImageFASTCornerDetectionFilter.m",
                "GPUImageFalseColorFilter.m",
                "GPUImageFilter.m",
                "GPUImageFilterGroup.m",
                "GPUImageFilterPipeline.m",
                "GPUImageFourInputFilter.m",
                "GPUImageFramebuffer.m",
                "GPUImageFramebufferCache.m",
                "GPUImageGammaFilter.m",
                "GPUImageGaussianBlurFilter.m",
                "GPUImageGaussianBlurPositionFilter.m",
                "GPUImageGaussianSelectiveBlurFilter.m",
                "GPUImageGlassSphereFilter.m",
                "GPUImageGrayscaleFilter.m",
                "GPUImageHSBFilter.m",
                "GPUImageHalftoneFilter.m",
                "GPUImageHardLightBlendFilter.m",
                "GPUImageHarrisCornerDetectionFilter.m",
                "GPUImageHazeFilter.m",
                "GPUImageHighPassFilter.m",
                "GPUImageHighlightShadowFilter.m",
                "GPUImageHighlightShadowTintFilter.m",
                "GPUImageHistogramEqualizationFilter.m",
                "GPUImageHistogramFilter.m",
                "GPUImageHistogramGenerator.m",
                "GPUImageHoughTransformLineDetector.m",
                "GPUImageHueBlendFilter.m",
                "GPUImageHueFilter.m",
                "GPUImageJFAVoronoiFilter.m",
                "GPUImageKuwaharaFilter.m",
                "GPUImageKuwaharaRadius3Filter.m",
                "GPUImageLanczosResamplingFilter.m",
                "GPUImageLaplacianFilter.m",
                "GPUImageLevelsFilter.m",
                "GPUImageLightenBlendFilter.m",
                "GPUImageLineGenerator.m",
                "GPUImageLinearBurnBlendFilter.m",
                "GPUImageLocalBinaryPatternFilter.m",
                "GPUImageLookupFilter.m",
                "GPUImageLowPassFilter.m",
                "GPUImageLuminanceRangeFilter.m",
                "GPUImageLuminanceThresholdFilter.m",
                "GPUImageLuminosity.m",
                "GPUImageLuminosityBlendFilter.m",
                "GPUImageMaskFilter.m",
                "GPUImageMedianFilter.m",
                "GPUImageMissEtikateFilter.m",
                "GPUImageMonochromeFilter.m",
                "GPUImageMosaicFilter.m",
                "GPUImageMotionBlurFilter.m",
                "GPUImageMotionDetector.m",
                "GPUImageMovie.m",
                "GPUImageMovieComposition.m",
                "GPUImageMultiplyBlendFilter.m",
                "GPUImageNobleCornerDetectionFilter.m",
                "GPUImageNonMaximumSuppressionFilter.m",
                "GPUImageNormalBlendFilter.m",
                "GPUImageOpacityFilter.m",
                "GPUImageOpeningFilter.m",
                "GPUImageOutput.m",
                "GPUImageOverlayBlendFilter.m",
                "GPUImageParallelCoordinateLineTransformFilter.m",
                "GPUImagePerlinNoiseFilter.m",
                "GPUImagePinchDistortionFilter.m",
                "GPUImagePixellateFilter.m",
                "GPUImagePixellatePositionFilter.m",
                "GPUImagePoissonBlendFilter.m",
                "GPUImagePolarPixellateFilter.m",
                "GPUImagePolkaDotFilter.m",
                "GPUImagePosterizeFilter.m",
                "GPUImagePrewittEdgeDetectionFilter.m",
                "GPUImageRGBClosingFilter.m",
                "GPUImageRGBDilationFilter.m",
                "GPUImageRGBErosionFilter.m",
                "GPUImageRGBFilter.m",
                "GPUImageRGBOpeningFilter.m",
                "GPUImageRawDataInput.m",
                "GPUImageRawDataOutput.m",
                "GPUImageSaturationBlendFilter.m",
                "GPUImageSaturationFilter.m",
                "GPUImageScreenBlendFilter.m",
                "GPUImageSepiaFilter.m",
                "GPUImageSharpenFilter.m",
                "GPUImageShiTomasiFeatureDetectionFilter.m",
                "GPUImageSingleComponentGaussianBlurFilter.m",
                "GPUImageSketchFilter.m",
                "GPUImageSkinToneFilter.m",
                "GPUImageSmoothToonFilter.m",
                "GPUImageSobelEdgeDetectionFilter.m",
                "GPUImageSoftEleganceFilter.m",
                "GPUImageSoftLightBlendFilter.m",
                "GPUImageSolarizeFilter.m",
                "GPUImageSolidColorGenerator.m",
                "GPUImageSourceOverBlendFilter.m",
                "GPUImageSphereRefractionFilter.m",
                "GPUImageStillCamera.m",
                "GPUImageStretchDistortionFilter.m",
                "GPUImageSubtractBlendFilter.m",
                "GPUImageSwirlFilter.m",
                "GPUImageTextureInput.m",
                "GPUImageTextureOutput.m",
                "GPUImageThreeInputFilter.m",
                "GPUImageThresholdEdgeDetectionFilter.m",
                "GPUImageThresholdSketchFilter.m",
                "GPUImageThresholdedNonMaximumSuppressionFilter.m",
                "GPUImageTiltShiftFilter.m",
                "GPUImageToneCurveFilter.m",
                "GPUImageToonFilter.m",
                "GPUImageTransformFilter.m",
                "GPUImageTwoInputCrossTextureSamplingFilter.m",
                "GPUImageTwoInputFilter.m",
                "GPUImageTwoPassFilter.m",
                "GPUImageTwoPassTextureSamplingFilter.m",
                "GPUImageUIElement.m",
                "GPUImageUnsharpMaskFilter.m",
                "GPUImageVibranceFilter.m",
                "GPUImageVideoCamera.m",
                "GPUImageVignetteFilter.m",
                "GPUImageVoronoiConsumerFilter.m",
                "GPUImageWeakPixelInclusionFilter.m",
                "GPUImageWhiteBalanceFilter.m",
                "GPUImageXYDerivativeFilter.m",
                "GPUImageZoomBlurFilter.m",
                "GPUImageiOSBlurFilter.m"              
            ],
            resources: [
                .process("Resources/*.png")
            ],
            publicHeadersPath: "include",
            cSettings: [
               // .define("CLANG_MODULES_AUTOLINK", to: "YES"),
                .define("GCC_WARN_ABOUT_RETURN_TYPE", to: "YES"),
                .headerSearchPath("include/GPUImage"),
                .unsafeFlags(["-fobjc-arc"]) // Enables ARC
            ],
            linkerSettings: [
                .linkedFramework("OpenGLES"),
                .linkedFramework("CoreMedia"),
                .linkedFramework("QuartzCore"),
                .linkedFramework("AVFoundation")
            ]
        )
    ]
)
