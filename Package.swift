// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "GPUImage",
    platforms: [
        .iOS(.v8),          // SPM requires a minimum of iOS 8.0
        //.macOS(.v10_10)     // SPM requires a minimum of macOS 10.10
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
            path: "framework/Source",
            exclude: [
                // iOS-specific exclusions
                "Mac",
                
                // macOS-specific exclusions
                // "GPUImageFilterPipeline.h",
                // "GPUImageFilterPipeline.m",
                // "GPUImageMovieComposition.h",
                // "GPUImageMovieComposition.m",
                // "GPUImageVideoCamera.h",
                // "GPUImageVideoCamera.m",
                // "GPUImageStillCamera.h",
                // "GPUImageStillCamera.m",
                // "GPUImageUIElement.h",
                // "GPUImageUIElement.m"
            ],
            sources: ["**/*.h", "**/*.m"],
            resources: [
                .process("../Resources/*.png")
            ],
            publicHeadersPath: ".",
            cSettings: [
                .define("CLANG_MODULES_AUTOLINK", to: "YES"),
                //.define("GCC_WARN_ABOUT_RETURN_TYPE", to: "YES", condition: .when(platforms: [.macOS]))
            ],
            linkerSettings: [
                .linkedFramework("OpenGLES"),
                .linkedFramework("CoreMedia"),
                .linkedFramework("QuartzCore"),
                .linkedFramework("AVFoundation")
            ]
        ),
    ],
    swiftLanguageVersions: [.v5]
)
