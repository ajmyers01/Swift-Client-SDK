// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.65 clang-900.0.37)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import AVFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("ZiggeoSwiftFramework")
@class NSCoder;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework18CapturePreviewView")
@interface CapturePreviewView : UIView
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;
@class NSBundle;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework13CoverSelector")
@interface CoverSelector : UIViewController <UITableViewDataSource, UITableViewDelegate>
- (nonnull instancetype)initWithVideoPath:(NSString * _Nonnull)videoPath OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20ZiggeoSwiftFramework22CoverSelectorTableCell")
@interface CoverSelectorTableCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20ZiggeoSwiftFramework20RecordedVideoPreview")
@interface RecordedVideoPreview : UIViewController
@property (nonatomic, copy) NSURL * _Null_unspecified videoURL;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (void)killPlayer;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class ZiggeoConfig;
@class ZiggeoConnect;
@class ZiggeoVideos;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework6Ziggeo")
@interface Ziggeo : NSObject
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull token;
@property (nonatomic, readonly, strong) ZiggeoConfig * _Nonnull config;
@property (nonatomic, strong) ZiggeoConnect * _Null_unspecified connect;
@property (nonatomic, strong) ZiggeoVideos * _Null_unspecified videos;
@property (nonatomic) BOOL enableDebugLogs;
- (void)logWithItem:(NSString * _Nonnull)item;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20ZiggeoSwiftFramework12ZiggeoConfig")
@interface ZiggeoConfig : NSObject
@property (nonatomic, copy) NSString * _Nonnull serverAPIUrl;
@property (nonatomic, copy) NSString * _Nonnull cdnAPIUrl;
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLSessionTask;
@class NSDictionary;
@class NSURLResponse;
@class NSError;
@class NSArray;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework13ZiggeoConnect")
@interface ZiggeoConnect : NSObject <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)appWakeupSignalTaskComplete:(NSString * _Nonnull)sessionID;
- (NSString * _Nonnull)formatURLRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)backgroundUploadWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data identifier:(NSString * _Nonnull)identifier file:(NSString * _Nonnull)file callback:(void (^ _Nullable)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback progress:(void (^ _Nullable)(int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)postRawDataWithPath:(NSString * _Nonnull)path data:(NSData * _Nonnull)data callback:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)requestWithMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)requestStringWithMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSString * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)requestJSONWithMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)requestJSONArrayWithMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSArray * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)getWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)getStringWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSString * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)getJsonWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)getJsonArrayWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSArray * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)postWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)postJsonWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)deleteWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)deleteJsonWithPath:(NSString * _Nonnull)path data:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class AVPlayerItem;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework12ZiggeoPlayer")
@interface ZiggeoPlayer : AVPlayer
- (nonnull instancetype)initWithApplication:(Ziggeo * _Nonnull)application videoToken:(NSString * _Nonnull)videoToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithURL:(NSURL * _Nonnull)URL SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithPlayerItem:(AVPlayerItem * _Nullable)item SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@protocol ZiggeoRecorderDelegate;
@class UIImage;
@protocol UIViewControllerTransitionCoordinator;
@class UIGestureRecognizer;
@class AVCaptureFileOutput;
@class AVCaptureDevice;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework14ZiggeoRecorder")
@interface ZiggeoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate>
@property (nonatomic) BOOL coverSelectorEnabled;
@property (nonatomic) BOOL cameraFlipButtonVisible;
@property (nonatomic) UIImagePickerControllerCameraDevice cameraDevice;
@property (nonatomic, strong) id <ZiggeoRecorderDelegate> _Null_unspecified recorderDelegate;
@property (nonatomic) double maxRecordedDurationSeconds;
@property (nonatomic, strong) NSDictionary * _Nullable extraArgsForCreateVideo;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified overlayView;
@property (nonatomic) BOOL showControls;
- (nonnull instancetype)initWithApplication:(Ziggeo * _Nonnull)application;
- (nonnull instancetype)initWithApplication:(Ziggeo * _Nonnull)application videoToken:(NSString * _Null_unspecified)videoToken OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)retake:(NSURL * _Null_unspecified)fileToBeRemoved;
- (void)upload:(NSURL * _Nonnull)fileToUpload;
- (void)coverSelected:(NSString * _Nonnull)videoPath image:(UIImage * _Null_unspecified)image;
- (IBAction)onCloseButtonTap:(id _Nonnull)sender;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (IBAction)changeCamera:(id _Nonnull)sender;
- (IBAction)focusAndExposeTap:(UIGestureRecognizer * _Nonnull)gestureRecognizer;
- (IBAction)toggleMovieRecording:(id _Nonnull)sender;
- (void)captureOutput:(AVCaptureFileOutput * _Null_unspecified)captureOutput didStartRecordingToOutputFileAtURL:(NSURL * _Null_unspecified)fileURL fromConnections:(NSArray * _Null_unspecified)connections;
- (void)captureOutput:(AVCaptureFileOutput * _Null_unspecified)captureOutput didFinishRecordingToOutputFileAtURL:(NSURL * _Null_unspecified)outputFileURL fromConnections:(NSArray * _Null_unspecified)connections error:(NSError * _Null_unspecified)error;
- (void)focus:(AVCaptureFocusMode)focusMode exposureMode:(AVCaptureExposureMode)exposureMode point:(CGPoint)point monitorSubjectAreaChange:(BOOL)monitorSubjectAreaChange;
- (void)setFlashMode:(AVCaptureFlashMode)flashMode device:(AVCaptureDevice * _Nonnull)device;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP20ZiggeoSwiftFramework22ZiggeoRecorderDelegate_")
@protocol ZiggeoRecorderDelegate
@optional
- (void)ziggeoRecorderDidCancel;
- (void)ziggeoRecorderRetake:(NSURL * _Null_unspecified)oldFile;
- (void)ziggeoRecorderDidStartRecording;
- (void)ziggeoRecorderDidFinishRecording;
- (void)ziggeoRecorderSessionRuntimeError:(NSError * _Nullable)error;
- (void)ziggeoRecorderSessionWasInterruptedWithReason:(NSInteger)reason;
- (void)ziggeoRecorderSessionInterruptionEnded;
- (void)ziggeoRecorderCaptureSessionStateChanged:(BOOL)runningNow;
- (void)ziggeoRecorderSubjectAreaDidChange;
- (void)ziggeoRecorderCurrentRecordedDuration:(double)seconds;
@end

@protocol ZiggeoVideosDelegate;

SWIFT_CLASS("_TtC20ZiggeoSwiftFramework12ZiggeoVideos")
@interface ZiggeoVideos : NSObject
@property (nonatomic, strong) id <ZiggeoVideosDelegate> _Nullable delegate;
- (NSURLSessionTask * _Nonnull)index:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSArray * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)attachVideo:(NSString * _Nonnull)token streamToken:(NSString * _Nonnull)streamToken data:(NSDictionary * _Nullable)data file:(NSString * _Nonnull)file callback:(void (^ _Nullable)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback progress:(void (^ _Nullable)(int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)createVideo:(NSDictionary * _Nullable)data file:(NSString * _Nonnull)file cover:(UIImage * _Nullable)cover callback:(void (^ _Nullable)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback progress:(void (^ _Nullable)(int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)reRecordVideo:(NSString * _Nonnull)token file:(NSString * _Nonnull)file callback:(void (^ _Nullable)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback progress:(void (^ _Nullable)(int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nullable)getImageForVideo:(NSString * _Nonnull)token callback:(void (^ _Nonnull)(UIImage * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (void)getImageForLocalVideo:(NSString * _Nonnull)path callback:(void (^ _Nonnull)(UIImage * _Nullable, NSError * _Nullable))callback;
- (NSString * _Nonnull)getURLForVideo:(NSString * _Nonnull)token SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)deleteVideo:(NSString * _Nonnull)token callback:(void (^ _Nullable)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)getDefaultStream:(NSString * _Nonnull)token callback:(void (^ _Nullable)(NSString * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)createStream:(NSString * _Nonnull)token callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)createEmptyVideo:(NSDictionary * _Nullable)data callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionTask * _Nonnull)recorderSubmit:(NSString * _Nonnull)token streamToken:(NSString * _Nonnull)streamToken callback:(void (^ _Nonnull)(NSDictionary * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (void)enforceImageForVideo:(NSString * _Nonnull)path image:(UIImage * _Nonnull)image;
- (NSURLSessionTask * _Nullable)attachCover:(NSString * _Nonnull)token streamToken:(NSString * _Nonnull)streamToken cover:(UIImage * _Nullable)cover callback:(void (^ _Nullable)(NSData * _Nullable, NSURLResponse * _Nullable, NSError * _Nullable))callback SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP20ZiggeoSwiftFramework20ZiggeoVideosDelegate_")
@protocol ZiggeoVideosDelegate
@optional
- (void)videoPreparingToUpload:(NSString * _Nonnull)sourcePath;
- (void)videoPreparingToUpload:(NSString * _Nonnull)sourcePath token:(NSString * _Nonnull)token;
- (void)videoFailedToUpload:(NSString * _Nonnull)sourcePath;
- (void)videoUploadStarted:(NSString * _Nonnull)sourcePath token:(NSString * _Nonnull)token backgroundTask:(NSURLSessionTask * _Nonnull)backgroundTask;
- (void)videoUploadComplete:(NSString * _Nonnull)sourcePath token:(NSString * _Nonnull)token response:(NSURLResponse * _Nullable)response error:(NSError * _Nullable)error json:(NSDictionary * _Nullable)json;
- (void)videoUploadProgress:(NSString * _Nonnull)sourcePath token:(NSString * _Nonnull)token totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
