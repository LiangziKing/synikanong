<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
 include $this->CompilerInclude("index_header.htm");
 ?>
 <!-- {xiao:if empty($num)} -->
 <div class="query">
抱歉，没有找到“<?php echo RemoveXSS($GLOBALS['keyword']); ?>”相关的产品。
 </div>
  <!-- {xiao:else} -->
                    <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{

$fields['stime'] = GetDateTimeMk($fields['senddate']);
$fields['arcurl'] = GetArcUrl($fields['aid'],$fields['typeid'],$fields['senddate'],$fields['title'],$fields['ismake'],$fields['arcrank'],$fields['namerule'],$fields['typedir'],$fields['money']);
$fields['typeurl'] = GetTypeUrl($fields['typeid'],MfTypedir($fields['typedir']),$fields['isdefault'],$fields['defaultname'],
			$fields['ispart'],$fields['namerule2'],$fields['moresite'],$fields['siteurl'],$fields['sitepath']);
?>
                    <div class="query goods" style="line-height:40px;"> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/1189.png" style="vertical-align: middle;position: relative;top: -1px;" width="25" height="25" alt="">您购买的【<?php echo $fields['title']; ?>】是合格产品。<span id="hits" style="display:none">335</span> </div>
<div class="query">
  <ul>
    <li class="bar"><img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/label.png" style="width:20px;margin-top:-5px;" />标签信息</li>
    <li class=""><i class="nbsp"></i> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/xuke.png" style="width:20px;margin-top:-5px;" /><b class="cg">生产经营者名称：</b><br />
      <?php echo $GLOBALS['cfg_webname']; ?> </li>
    <li class=""><i class="nbsp"></i> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/name.png" style="width:20px;margin-top:-5px;" /><b class="cg">农药名称：</b><br />
     <?php echo $fields['title']; ?></li>
    <li> <i class="nbsp"></i> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/code.png" style="width:20px;margin-top:-5px;" /><b class="cg">单元识别代码：</b><br />
      <?php echo $fields['hits']; ?></li>

 <li> <i class="nbsp"></i> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/hzq.png" style="width:20px;margin-top:-5px;" /><b class="cg">联系售后：</b><br />
      全国免费服务热线：400-6767-351
</li>


    <li> <i class="nbsp"></i><i class="nbsp"></i><i class="nbsp"></i> <img src="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/img/site.png" style="width:20px;margin-top:-5px;" /> <a href="<?php echo $GLOBALS['cfg_basehost']; ?>"><b class="cg">追溯网址</b>：<br />
      <?php echo $GLOBALS['cfg_basehost']; ?></a> </li>
    <li style="text-align:center;"><a href="<?php echo $fields['arcurl']; ?>" style="margin:0; text-align: center;"><span>点击查看详细</span></a></li>
  </ul>
</div>
 <?php
}
}?>
                <!-- {/xiao:if} -->
<?php include $this->CompilerInclude("footer.htm");
 ?>