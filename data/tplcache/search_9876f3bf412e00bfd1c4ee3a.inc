<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
<title>搜索页_<?php echo $GLOBALS['cfg_webname']; ?></title>
<meta name="keywords" content="<?php echo $fields['keywords']; ?>" />
<meta name="description" content="<?php echo html2text($fields['description']); ?>" />
<link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/style/dedecms.css" rel="stylesheet" media="screen" type="text/css" />
</head>
<body class="articlelist" style="min-width:1000px">
<div class="header_top">  
    <div class="center">  
     <span id="time" class="time">织梦CMS - 轻松建站从此开始！</span>
     <div class="toplinks"><a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/heightsearch.php" target="_blank">高级搜索</a>|<a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>/data/sitemap.html" target="_blank">网站地图</a>|<a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>tags.php">TAG标签</a><a href="<?php echo $GLOBALS['cfg_dataurl']; ?>/rssmap.html" class="rss">RSS订阅</a><span>[<a href="" onclick="this.style.behavior='url(#default#homepage)';this.setHomePage('<?php echo $GLOBALS['cfg_basehost']; ?>');">设为首页</a>] [<a href="javascript:window.external.AddFavorite('<?php echo $GLOBALS['cfg_basehost']; ?>','<?php echo $GLOBALS['cfg_webname']; ?>')">加入收藏</a>]</span>   <a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>">返回首页</a></div>
    </div> 
</div>
<div class="search_header">
   <h1><a href="<?php echo $GLOBALS['cfg_basehost']; ?>"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/logo.gif" height="54" width="216" alt="<?php echo $GLOBALS['cfg_webname']; ?>"/></a> </h1>   
   <div class="search_box">
        <form>
		    <input name="q" type="text" id="search-keyword" value="<?php echo RemoveXSS($GLOBALS['keyword']); ?>" onfocus="if(this.value=='在这里搜索...'){this.value='';}"  onblur="if(this.value==''){this.value='在这里搜索...';}" />
			<select name="searchtype" id="search-option">
               <option value="title" selected='1'>检索标题</option>
               <option value="titlekeyword">智能模糊</option>
            </select>
			<button type="submit" class="search-submit">搜索</button>
			<a href="heightsearch.php">高级搜索</a>
		</form>
   </div>   
   <div id="searchTopBanner" style="float:right; margin:10px"><script src='<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/ad_js.php?aid=18' language='javascript'></script> </div>
</div><!-- //top -->
<!-- /header -->
<div class="resultbar">搜索 <strong class="fc_03c"><?php echo RemoveXSS($GLOBALS['keyword']); ?></strong> 的结果 </div>
<div class="result_content">	
	<div class="sidebar">
        <h2>相关搜索</h2>
        <ul>
            <li><?php
$atts = array();
$atts['tagname'] = 'likewords';
$atts['num'] = '8';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{

}
}
?></li>
	    </ul>
		<div class="sidebar_banner"><script src='<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/ad_js.php?aid=16' language='javascript'></script></div>
    </div>
		<div class="resultlist">
			<ul>
             <?php
$atts = array();
$atts['tagname'] = 'list';
$atts['perpage'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
				<li>      				
					<h3><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h3>
                    <p>[field:description/]...</p>
					<span>
					    <a href="[field:arcurl/]">[field:global.cfg_basehost/][field:arcurl/]</a>
						<small>分类：</small><a href="[field:typeurl/]" target="_blank">[field:typename/]</a>
						<small>点击：</small>[field:click/]
						<small>日期：</small>[field:stime/]
					</span>
				</li>
			<?php
}
}
?>
			</ul>
			<div class="fl dede_pages">
			<ul class="pagelist">
            	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '4';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
  
			</ul>
		</div><!-- /pages -->
		</div><!-- /listbox -->
</div>
<div class="footer center mt1 clear">
	<!-- 
		为了支持织梦团队的发展,请您保留织梦内容管理系统的链接信息.
		我们对支持织梦团队发展的朋友表示真心的感谢!织梦因您更精彩!
	-->
    <div class="footer_left"></div>
    <div class="footer_body">
	<p class="powered">    
		Powered by <a href="http://www.dedecms.com" title="织梦内容管理系统(DedeCms)--国内最专业的PHP网站管理系统，轻松建站的首选利器。" target="_blank"><strong>DedeCMS<?php echo $GLOBALS['cfg_version']; ?></strong></a> &copy; 2004-2011 <a href="http://www.desdev.cn/" target="_blank">DesDev</a> Inc.<br /><div class="copyright"><?php echo $GLOBALS['cfg_powerby']; ?>&nbsp;&nbsp;<?php echo $GLOBALS['cfg_beian']; ?></div></p>        
<!-- /powered -->
   </div>
   <div class="footer_right"></div>
</div>
<!-- /footer -->
</body>
</html>