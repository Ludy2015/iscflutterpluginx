# isc_flutter_plugin播放器插件

* 插件基于海康isc平台原生SDK进行的二次封装,支持Android和IOS
* 插件已在本公司及多家友商公司实际项目中使用,效果良好
* 插件提供了Dart版AK/SK验证代码,支持直接调用ISC平台部分常用API
* 插件经实际使用最低支持v1.2.0,最高支持V1.6.1,其他版本没有测试过

## 不同状态下支持的功能不同,插件中的源码和demo注释写的很详细
### 预览状态下支持的功能:
* 预览
* 抓拍
* 录像
* 云台控制
* 语音对讲
* 声音控制
* 码流平滑切换(仅支持Android设备)

### 回放状态下支持的功能:
* 回放
* 抓拍
* 录像
* 指定回放开始时间位置
* 查询当前播放时间戳

### API接口能力
* isc平台认证
* 获取预览地址
* 获取回放地址
* 云台控制
* 获取语音对讲地址
* 获取海康SDK版本号

## 注意
* 需要根据实际情况,使用http或https请求,这个可以跟运维人员确认
* 根据实际情况,选择版本,1.4+以上的版本api接口地址有变化,需要注意
* 注意如果开启了混淆,需要在混淆文件中增加以下代码
```
# 海康威视视频取流播放相关库的混淆配置
-keep class org.MediaPlayer.PlayM4.** {*;}
-keep class com.hikvision.netsdk.** {*;}
-keep class com.hikvision.audio.** {*;}
-keep class hik.common.isms.hpsclient.** {*;}
-keep class com.hikvision.open.hikvideoplayer.** {*;}
```
* IOS端海康的SDK仅支持真机，不支持模拟器

* 如遇到打包后Android端视频无法播放的情况，可以参照demo中，app/build.gradle文件中的步骤进行配置，主要包括：
  apk用命令行打包时用到的签名配置
  开启混淆的,注意一定要添加海康SDK的反混淆
  so库过滤
  
## 使用教程及常见问题汇总: https://www.jianshu.com/p/c64c37f22284
## 接入过程中遇到问题可先参考 使用教程及常见问题汇总,或加入技术支持群:QQ 856941179 大家一起研究学习

## 版权声明
* 本插件使用的是 MIT License 授权,可以在任何项目中使用;
* 插件中使用了海康的SDK,在项目中使用时,需保证具有海康SDK的使用授权

## 关于作者
* 北京金控数据技术股份有限公司是2008年注册于中关村核心区的国家级高新技术企业，主要从事智慧水厂、智慧水务系统开发和运营，致力于提高水务行业智能化水平，改善人们工作的环境和方式。公司是中关村“瞪羚企业”、海淀区“海帆企业”、北京市专利试点单位、北京市软件企业、中国水协智慧水务委员会常务委员，拥有强大的自主技术研发能力，承担了十三五“水专项”重大科技研发项目，已获得20多项发明专利、60多项软件著作权、2项北京市新技术新产品、2项首台（套）重大装备示范项目，并获得了启明创投与中信建投两家知名投资机构的风险投资。
