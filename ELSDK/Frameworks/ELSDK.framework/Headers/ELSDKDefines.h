//
//  ELSDKDefines.h
//  ELSDK
//
//  Created by bruce on 16/3/8.
//  Copyright © 2016年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

//登陆相关的
extern NSString *const EL_LOGIN_NOTIFICATION;              //登录
extern NSString *const EL_LOGOUT_NOTIFICATION;             //退出
extern NSString *const EL_SWITCHACCOUNT_NOTIFICATION;      //切换账号
extern NSString *const EL_WEBVIEW_CLOSE_NOTIFICATION;      //关闭webview的通知，内部使用
extern NSString *const EL_WEBVIEW_LOGOUT_NOTIFICATION;     //页面webview，点击退出
extern NSString *const EL_WEBVIEW_CUSTOMER_NOTIFICATION;   //平台键点开的页面关闭通知

extern NSString *const EL_INFO_VIEW_CLOSE_NOTIFICATION;   //关闭InfoView

extern NSString *const EL_TIPS_WEBVIEW_CLOSE_NOTIFICATION;  //TIPS页面 关闭
extern NSString *const EL_TIPS_WEBVIEW_RESULT_NOTIFICATION;

//GameCenter
extern NSString *const EL_PRESENT_AUTHVIEWCONTROLLER_NOTIFICATION;
extern NSString *const EL_LOCALPALYER_AUTH_NOTIFICATION;
extern NSString *const EL_GAMECENTER_LOGIN;

extern NSString *const NSLOGFLAG;
extern NSString *const ELREMOVETRANSACTIONS_NOTIFICATION;

//充值
extern NSString *const EL_ROLE_ID;
extern NSString *const EL_ROLE_NAME;
extern NSString *const EL_ROLE_LEVEL;
extern NSString *const EL_ROLE_COIN;
extern NSString *const EL_ROLE_MENEY;


//CS选项
extern NSString *const EL_USERINFO;                 //用户信息
extern NSString *const EL_FEEDBACK;                 //用户反馈
extern NSString *const EL_BULLENTIN;                //SDK公告

//
extern NSString *const EL_LOGIN_JSOC;               //登录
extern NSString *const EL_LOGIN_COLSE_JSOC;         //web关闭
extern NSString *const EL_LOGIN_FB_JSOC;            //FB登陆回调
extern NSString *const EL_LOGIN_GOOGLE_JSOC;        //Google登陆回调
extern NSString *const EL_LOGOUT_JSOC;              //注销
extern NSString *const EL_SHARE_WECHAT_JSOC;        //微信分享回调
extern NSString *const EL_REVIEW_STAR_JSOC;
extern NSString *const EL_REMOVE_TRANSCATIONS;      //删除TRANSCATIONS
extern NSString *const EL_SIMULATED_LOGIN_JSOC;     //模拟登录
extern NSString *const EL_PSD_CHANGE;               //网页修改密码
extern NSString *const EL_discrete_Result;

typedef NS_ENUM(NSInteger, ELSTATUS) {
    message_fail = 0,                       //失败
    message_success = 1,                    //成功
    message_buying_error,                   //有其他订单购买进行中
    message_product_info_error,             //商品信息获取失败
    message_get_order_error,                //用户下单失败
//    message_user_cancel,                  //用户取消支付
    message_user_paid,                      //用户完成支付
    message_user_paid_error,                //用户支付失败
    message_issue_success,                  //物品下发成功
    message_issue_error,                    //物品下发失败
    
    message_web_logout = 100,               //webview注销
};

typedef NS_ENUM(NSInteger, ELLoginType) {
    EL_LOGIN_UNKOWN = 0,        //未知
    EL_LOGIN_GUEST = 1,         //游客账号登录
    EL_LOGIN_EL = 2,            //账号登录
    EL_LOGIN_GAMECENTER =3,     //gamecenter
    EL_LOGIN_GOOGLEPLAY = 4,    //googleplay
    EL_LOGIN_FB = 5,            //Facebook
    EL_LOGIN_LINE = 6,          //Line
    EL_LOGIN_TWITTER = 7,       //twitter
    EL_LOGIN_QQ = 8,            //QQ
    EL_LOGIN_WECHAT = 9,        //微信
    EL_LOGIN_APPLEID = 10,      //苹果id登录

};

//回调数据，默认返回失败信息
@interface ELCallbackModel : NSObject

extern NSString *const EL_CALLBACK_SUCCESS;      //回调成功
extern NSString *const EL_CALLBACK_FAIL;         //回调失败

@property (nonatomic, strong) NSString *message;
@property (nonatomic, assign) ELSTATUS status;
@property (nonatomic, strong) id data;

@end

typedef void  (^ELCallbackBlock)(ELCallbackModel *callbackModel);
typedef void  (^ELCallback)(void);


@interface ELSDKDefines : NSObject


@end


#pragma mark - 语言类型
//zh-cn 简体中文
//zh-hk 繁体中文
//en 英文
//ja  日文
//th  泰文
//vi  越南
//id  印尼
//de  德文
typedef NS_ENUM(NSInteger, ELLanguageType) {
    EL_LANGUAGE_SYSTEM = 0,//取设备的系统语言
    EL_LANGUAGE_CN,//简体中文
    EL_LANGUAGE_HK,//繁体中文
    EL_LANGUAGE_EN,//英文
    EL_LANGUAGE_JA,//日文
    EL_LANGUAGE_TH,//泰文
    EL_LANGUAGE_VI,//越南文
    EL_LANGUAGE_ID,//印尼文
    EL_LANGUAGE_DE,//德文
    EL_LANGUAGE_KO,//韩文
    EL_LANGUAGE_FR,//法国
    EL_LANGUAGE_TR,//土耳其
};
#pragma mark - 分享类别

typedef NS_ENUM(NSInteger, ELShareType){
    
    EL_SHAREFACEBOOKLINK = 1,    //facebook link
    EL_SHAREFACEBOOKIMAGE,       //facebook image
    EL_SHAREINSTAGRAM,           //instagram
    EL_SHARELINE,                //line
    EL_SHAREWXSESSIONLINK,       //微信会话 link
    EL_SHAREWXSESSIONIMAGE,      //微信会话 image
    EL_SHAREWXTIMELINELINK,      //微信朋友圈 link
    EL_SHAREWXTIMELINEIMAGE,     //微信朋友圈 image

    EL_SHAREFACEBOOK,           //facebook
    EL_SHAREWXSESSION,          //微信会话
    EL_SHAREWXTIMELINE,         //微信朋友圈
    
    EL_SHARETWITTER,            //twitter

};

