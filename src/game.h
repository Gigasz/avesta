



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAcJBXkK4fAaQRFbapzVyZsBLio2nQ:1406096493334";
 
 
 var CS_env = {"projectName": "avesta74", "loggedInUserEmail": "jose.guitian@coremain.com", "token": "ABZ6GAcJBXkK4fAaQRFbapzVyZsBLio2nQ:1406096493334", "profileUrl": "/u/108692122734644646415/", "relativeBaseUrl": "", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "domainName": null, "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "projectHomeUrl": "/p/avesta74"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-27551938-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>game.h - 
 avesta74 -
 
 
 A modified Open Tibia Server for the old tibia 7.4 - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>jose.guitian@coremain.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/108692122734644646415/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/108692122734644646415/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Favesta74%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fgame.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/avesta74">
 <a href="/p/avesta74/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/avesta74/"><span itemprop="name">avesta74</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/avesta74/"><span itemprop="description">A modified Open Tibia Server for the old tibia 7.4</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/avesta74/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/avesta74/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/avesta74/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/avesta74/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/avesta74/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/avesta74/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/avesta74/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/avesta74/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/avesta74/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/avesta74/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/avesta74/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>game.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/avesta74/source/browse/trunk/src/game.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/avesta74/source/browse/trunk/src/game.h?r=91" title="Previous">&lsaquo;r91</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r102</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn102_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn102_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn102_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn102_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn102_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn102_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn102_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn102_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn102_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn102_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn102_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn102_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn102_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn102_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn102_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn102_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn102_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn102_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn102_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn102_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn102_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn102_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn102_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn102_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn102_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn102_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn102_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn102_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn102_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn102_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn102_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn102_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn102_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn102_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn102_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn102_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn102_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn102_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn102_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn102_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn102_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn102_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn102_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn102_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn102_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn102_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn102_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn102_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn102_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn102_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn102_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn102_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn102_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn102_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn102_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn102_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn102_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn102_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn102_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn102_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn102_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn102_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn102_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn102_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn102_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn102_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn102_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn102_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn102_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn102_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn102_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn102_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn102_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn102_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn102_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn102_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn102_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn102_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn102_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn102_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn102_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn102_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn102_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn102_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn102_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn102_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn102_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn102_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn102_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn102_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn102_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn102_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn102_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn102_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn102_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn102_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn102_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn102_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn102_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn102_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn102_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn102_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn102_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn102_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn102_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn102_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn102_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn102_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn102_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn102_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn102_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn102_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn102_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn102_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn102_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn102_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn102_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn102_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn102_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn102_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn102_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn102_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn102_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn102_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn102_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn102_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn102_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn102_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn102_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn102_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn102_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn102_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn102_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn102_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn102_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn102_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn102_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn102_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn102_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn102_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn102_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn102_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn102_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn102_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn102_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn102_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn102_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn102_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn102_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn102_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn102_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn102_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn102_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn102_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn102_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn102_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn102_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn102_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn102_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn102_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn102_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn102_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn102_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn102_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn102_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn102_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn102_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn102_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn102_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn102_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn102_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn102_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn102_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn102_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn102_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn102_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn102_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn102_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn102_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn102_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn102_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn102_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn102_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn102_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn102_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn102_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn102_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn102_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn102_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn102_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn102_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn102_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn102_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn102_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn102_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn102_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn102_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn102_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn102_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn102_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn102_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn102_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn102_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn102_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn102_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn102_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn102_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn102_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn102_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn102_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn102_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn102_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn102_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn102_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn102_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn102_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn102_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn102_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn102_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn102_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn102_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn102_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn102_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn102_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn102_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn102_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn102_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn102_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn102_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn102_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn102_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn102_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn102_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn102_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn102_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn102_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn102_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn102_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn102_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn102_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn102_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn102_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn102_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn102_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn102_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn102_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn102_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn102_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn102_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn102_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn102_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn102_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn102_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn102_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn102_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn102_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn102_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn102_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn102_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn102_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn102_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn102_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn102_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn102_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn102_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn102_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn102_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn102_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn102_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn102_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn102_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn102_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn102_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn102_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn102_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn102_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn102_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn102_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn102_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn102_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn102_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn102_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn102_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn102_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn102_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn102_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn102_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn102_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn102_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn102_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn102_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn102_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn102_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn102_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn102_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn102_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn102_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn102_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn102_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn102_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn102_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn102_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn102_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn102_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn102_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn102_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn102_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn102_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn102_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn102_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn102_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn102_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn102_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn102_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn102_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn102_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn102_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn102_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn102_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn102_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn102_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn102_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn102_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn102_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn102_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn102_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn102_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn102_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn102_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn102_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn102_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn102_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn102_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn102_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn102_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn102_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn102_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn102_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn102_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn102_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn102_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn102_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn102_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn102_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn102_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn102_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn102_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn102_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn102_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn102_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn102_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn102_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn102_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn102_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn102_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn102_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn102_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn102_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn102_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn102_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn102_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn102_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn102_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn102_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn102_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn102_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn102_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn102_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn102_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn102_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn102_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn102_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn102_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn102_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn102_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn102_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn102_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn102_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn102_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn102_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn102_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn102_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn102_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn102_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn102_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn102_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn102_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn102_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn102_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn102_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn102_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn102_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn102_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn102_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn102_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn102_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn102_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn102_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn102_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn102_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn102_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn102_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn102_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn102_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn102_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn102_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn102_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn102_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn102_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn102_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn102_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn102_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn102_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn102_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn102_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn102_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn102_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn102_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn102_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn102_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn102_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn102_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn102_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn102_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn102_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn102_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn102_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn102_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn102_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn102_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn102_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn102_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn102_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn102_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn102_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn102_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn102_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn102_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn102_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn102_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn102_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn102_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn102_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn102_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn102_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn102_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn102_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn102_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn102_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn102_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn102_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn102_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn102_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn102_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn102_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn102_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn102_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn102_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn102_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn102_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn102_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn102_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn102_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn102_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn102_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn102_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn102_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn102_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn102_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn102_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn102_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn102_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn102_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn102_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn102_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn102_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn102_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn102_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn102_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn102_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn102_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn102_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn102_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn102_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn102_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn102_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn102_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn102_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn102_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn102_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn102_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn102_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn102_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn102_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn102_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn102_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn102_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn102_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn102_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn102_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn102_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn102_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn102_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn102_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn102_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn102_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn102_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn102_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn102_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn102_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn102_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn102_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn102_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn102_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn102_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn102_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn102_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn102_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn102_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn102_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn102_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn102_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn102_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn102_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn102_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn102_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn102_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn102_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn102_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn102_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn102_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn102_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn102_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn102_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn102_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn102_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn102_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn102_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn102_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn102_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn102_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn102_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn102_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn102_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn102_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn102_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn102_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn102_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn102_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn102_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn102_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn102_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn102_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn102_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn102_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn102_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn102_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn102_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn102_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn102_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn102_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn102_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn102_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn102_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn102_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn102_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn102_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn102_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn102_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn102_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn102_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn102_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn102_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn102_574"

><td id="574"><a href="#574">574</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn102_1

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_2

><td class="source">// OpenTibia - an opensource roleplaying game<br></td></tr
><tr
id=sl_svn102_3

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_4

><td class="source">// class representing the gamestate<br></td></tr
><tr
id=sl_svn102_5

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_6

><td class="source">// This program is free software; you can redistribute it and/or<br></td></tr
><tr
id=sl_svn102_7

><td class="source">// modify it under the terms of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_8

><td class="source">// as published by the Free Software Foundation; either version 2<br></td></tr
><tr
id=sl_svn102_9

><td class="source">// of the License, or (at your option) any later version.<br></td></tr
><tr
id=sl_svn102_10

><td class="source">//<br></td></tr
><tr
id=sl_svn102_11

><td class="source">// This program is distributed in the hope that it will be useful,<br></td></tr
><tr
id=sl_svn102_12

><td class="source">// but WITHOUT ANY WARRANTY; without even the implied warranty of<br></td></tr
><tr
id=sl_svn102_13

><td class="source">// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the<br></td></tr
><tr
id=sl_svn102_14

><td class="source">// GNU General Public License for more details.<br></td></tr
><tr
id=sl_svn102_15

><td class="source">//<br></td></tr
><tr
id=sl_svn102_16

><td class="source">// You should have received a copy of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_17

><td class="source">// along with this program; if not, write to the Free Software Foundation,<br></td></tr
><tr
id=sl_svn102_18

><td class="source">// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.<br></td></tr
><tr
id=sl_svn102_19

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_20

><td class="source"><br></td></tr
><tr
id=sl_svn102_21

><td class="source"><br></td></tr
><tr
id=sl_svn102_22

><td class="source">#ifndef __OTSERV_GAME_H__<br></td></tr
><tr
id=sl_svn102_23

><td class="source">#define __OTSERV_GAME_H__<br></td></tr
><tr
id=sl_svn102_24

><td class="source"><br></td></tr
><tr
id=sl_svn102_25

><td class="source">#include &quot;definitions.h&quot;<br></td></tr
><tr
id=sl_svn102_26

><td class="source">#include &quot;map.h&quot;<br></td></tr
><tr
id=sl_svn102_27

><td class="source">#include &quot;position.h&quot;<br></td></tr
><tr
id=sl_svn102_28

><td class="source">#include &quot;item.h&quot;<br></td></tr
><tr
id=sl_svn102_29

><td class="source">#include &quot;container.h&quot;<br></td></tr
><tr
id=sl_svn102_30

><td class="source">#include &quot;player.h&quot;<br></td></tr
><tr
id=sl_svn102_31

><td class="source">#include &quot;npc.h&quot;<br></td></tr
><tr
id=sl_svn102_32

><td class="source">#include &quot;spawn.h&quot;<br></td></tr
><tr
id=sl_svn102_33

><td class="source">#include &quot;templates.h&quot;<br></td></tr
><tr
id=sl_svn102_34

><td class="source">#include &quot;scheduler.h&quot;<br></td></tr
><tr
id=sl_svn102_35

><td class="source"><br></td></tr
><tr
id=sl_svn102_36

><td class="source">#include &lt;queue&gt;<br></td></tr
><tr
id=sl_svn102_37

><td class="source">#include &lt;vector&gt;<br></td></tr
><tr
id=sl_svn102_38

><td class="source">#include &lt;set&gt;<br></td></tr
><tr
id=sl_svn102_39

><td class="source"><br></td></tr
><tr
id=sl_svn102_40

><td class="source">class Creature;<br></td></tr
><tr
id=sl_svn102_41

><td class="source">class Monster;<br></td></tr
><tr
id=sl_svn102_42

><td class="source">class Npc;<br></td></tr
><tr
id=sl_svn102_43

><td class="source">class CombatInfo;<br></td></tr
><tr
id=sl_svn102_44

><td class="source">class Commands;<br></td></tr
><tr
id=sl_svn102_45

><td class="source"><br></td></tr
><tr
id=sl_svn102_46

><td class="source">enum stackPosType_t{<br></td></tr
><tr
id=sl_svn102_47

><td class="source">	STACKPOS_NORMAL,<br></td></tr
><tr
id=sl_svn102_48

><td class="source">	STACKPOS_MOVE,<br></td></tr
><tr
id=sl_svn102_49

><td class="source">	STACKPOS_LOOK,<br></td></tr
><tr
id=sl_svn102_50

><td class="source">	STACKPOS_USE,<br></td></tr
><tr
id=sl_svn102_51

><td class="source">	STACKPOS_USEITEM,<br></td></tr
><tr
id=sl_svn102_52

><td class="source">};<br></td></tr
><tr
id=sl_svn102_53

><td class="source"><br></td></tr
><tr
id=sl_svn102_54

><td class="source">enum WorldType_t {<br></td></tr
><tr
id=sl_svn102_55

><td class="source">	WORLD_TYPE_NO_PVP = 1,<br></td></tr
><tr
id=sl_svn102_56

><td class="source">	WORLD_TYPE_PVP = 2,<br></td></tr
><tr
id=sl_svn102_57

><td class="source">	WORLD_TYPE_PVP_ENFORCED = 3<br></td></tr
><tr
id=sl_svn102_58

><td class="source">};<br></td></tr
><tr
id=sl_svn102_59

><td class="source"><br></td></tr
><tr
id=sl_svn102_60

><td class="source">enum GameState_t {<br></td></tr
><tr
id=sl_svn102_61

><td class="source">	GAME_STATE_STARTUP,<br></td></tr
><tr
id=sl_svn102_62

><td class="source">	GAME_STATE_INIT,<br></td></tr
><tr
id=sl_svn102_63

><td class="source">	GAME_STATE_NORMAL,<br></td></tr
><tr
id=sl_svn102_64

><td class="source">	GAME_STATE_CLOSED,<br></td></tr
><tr
id=sl_svn102_65

><td class="source">	GAME_STATE_SHUTDOWN,<br></td></tr
><tr
id=sl_svn102_66

><td class="source">	GAME_STATE_CLOSING,<br></td></tr
><tr
id=sl_svn102_67

><td class="source">	GAME_STATE_LAST = GAME_STATE_CLOSING<br></td></tr
><tr
id=sl_svn102_68

><td class="source">};<br></td></tr
><tr
id=sl_svn102_69

><td class="source"><br></td></tr
><tr
id=sl_svn102_70

><td class="source">enum LightState_t {<br></td></tr
><tr
id=sl_svn102_71

><td class="source">	LIGHT_STATE_DAY,<br></td></tr
><tr
id=sl_svn102_72

><td class="source">	LIGHT_STATE_NIGHT,<br></td></tr
><tr
id=sl_svn102_73

><td class="source">	LIGHT_STATE_SUNSET,<br></td></tr
><tr
id=sl_svn102_74

><td class="source">	LIGHT_STATE_SUNRISE,<br></td></tr
><tr
id=sl_svn102_75

><td class="source">};<br></td></tr
><tr
id=sl_svn102_76

><td class="source"><br></td></tr
><tr
id=sl_svn102_77

><td class="source">struct RuleViolation {<br></td></tr
><tr
id=sl_svn102_78

><td class="source">	RuleViolation(Player* _reporter, const std::string&amp; _text, uint32_t _time) :<br></td></tr
><tr
id=sl_svn102_79

><td class="source">		reporter(_reporter),<br></td></tr
><tr
id=sl_svn102_80

><td class="source">		gamemaster(NULL),<br></td></tr
><tr
id=sl_svn102_81

><td class="source">		text(_text),<br></td></tr
><tr
id=sl_svn102_82

><td class="source">		time(_time),<br></td></tr
><tr
id=sl_svn102_83

><td class="source">		isOpen(true)<br></td></tr
><tr
id=sl_svn102_84

><td class="source">	{<br></td></tr
><tr
id=sl_svn102_85

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_86

><td class="source"><br></td></tr
><tr
id=sl_svn102_87

><td class="source">	Player* reporter;<br></td></tr
><tr
id=sl_svn102_88

><td class="source">	Player* gamemaster;<br></td></tr
><tr
id=sl_svn102_89

><td class="source">	std::string text;<br></td></tr
><tr
id=sl_svn102_90

><td class="source">	uint32_t time;<br></td></tr
><tr
id=sl_svn102_91

><td class="source">	bool isOpen;<br></td></tr
><tr
id=sl_svn102_92

><td class="source"><br></td></tr
><tr
id=sl_svn102_93

><td class="source">private:<br></td></tr
><tr
id=sl_svn102_94

><td class="source">	RuleViolation(const RuleViolation&amp;);<br></td></tr
><tr
id=sl_svn102_95

><td class="source">};<br></td></tr
><tr
id=sl_svn102_96

><td class="source"><br></td></tr
><tr
id=sl_svn102_97

><td class="source">typedef std::map&lt; uint32_t, shared_ptr&lt;RuleViolation&gt; &gt; RuleViolationsMap;<br></td></tr
><tr
id=sl_svn102_98

><td class="source"><br></td></tr
><tr
id=sl_svn102_99

><td class="source">#define EVENT_LIGHTINTERVAL  10000<br></td></tr
><tr
id=sl_svn102_100

><td class="source">#define EVENT_DECAYINTERVAL  1000<br></td></tr
><tr
id=sl_svn102_101

><td class="source">#define EVENT_DECAY_BUCKETS  16<br></td></tr
><tr
id=sl_svn102_102

><td class="source"><br></td></tr
><tr
id=sl_svn102_103

><td class="source">/**<br></td></tr
><tr
id=sl_svn102_104

><td class="source">  * Main Game class.<br></td></tr
><tr
id=sl_svn102_105

><td class="source">  * This class is responsible to control everything that happens<br></td></tr
><tr
id=sl_svn102_106

><td class="source">  */<br></td></tr
><tr
id=sl_svn102_107

><td class="source"><br></td></tr
><tr
id=sl_svn102_108

><td class="source">class Game<br></td></tr
><tr
id=sl_svn102_109

><td class="source">{<br></td></tr
><tr
id=sl_svn102_110

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_111

><td class="source">  Game();<br></td></tr
><tr
id=sl_svn102_112

><td class="source">	~Game();<br></td></tr
><tr
id=sl_svn102_113

><td class="source"><br></td></tr
><tr
id=sl_svn102_114

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_115

><td class="source">	  * Load a map.<br></td></tr
><tr
id=sl_svn102_116

><td class="source">	  * \param filename Mapfile to load<br></td></tr
><tr
id=sl_svn102_117

><td class="source">	  * \param filekind Kind of the map, BIN SQL or TXT<br></td></tr
><tr
id=sl_svn102_118

><td class="source">	  * \return Int 0 built-in spawns, 1 needs xml spawns, 2 needs sql spawns, -1 if got error<br></td></tr
><tr
id=sl_svn102_119

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_120

><td class="source">	int loadMap(std::string filename, std::string filekind);<br></td></tr
><tr
id=sl_svn102_121

><td class="source"><br></td></tr
><tr
id=sl_svn102_122

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_123

><td class="source">	  * Get the map size - info purpose only<br></td></tr
><tr
id=sl_svn102_124

><td class="source">	  * \param width width of the map<br></td></tr
><tr
id=sl_svn102_125

><td class="source">	  * \param height height of the map<br></td></tr
><tr
id=sl_svn102_126

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_127

><td class="source">	void getMapDimensions(uint32_t&amp; width, uint32_t&amp; height){<br></td></tr
><tr
id=sl_svn102_128

><td class="source">		width = map-&gt;mapWidth;<br></td></tr
><tr
id=sl_svn102_129

><td class="source">		height = map-&gt;mapHeight;<br></td></tr
><tr
id=sl_svn102_130

><td class="source">		return;<br></td></tr
><tr
id=sl_svn102_131

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_132

><td class="source"><br></td></tr
><tr
id=sl_svn102_133

><td class="source">	void setWorldType(WorldType_t type);<br></td></tr
><tr
id=sl_svn102_134

><td class="source">	WorldType_t getWorldType() const {return worldType;}<br></td></tr
><tr
id=sl_svn102_135

><td class="source">	uint32_t getInFightTicks() {return inFightTicks;}<br></td></tr
><tr
id=sl_svn102_136

><td class="source">	int32_t getExhaustionTicks() {return exhaustionTicks;}<br></td></tr
><tr
id=sl_svn102_137

><td class="source">	int32_t getFightExhaustionTicks() {return fightExhaustionTicks;}<br></td></tr
><tr
id=sl_svn102_138

><td class="source">	int32_t getHealExhaustionTicks() {return healExhaustionTicks;}<br></td></tr
><tr
id=sl_svn102_139

><td class="source"><br></td></tr
><tr
id=sl_svn102_140

><td class="source">	Cylinder* internalGetCylinder(Player* player, const Position&amp; pos);<br></td></tr
><tr
id=sl_svn102_141

><td class="source">	Thing* internalGetThing(Player* player, const Position&amp; pos, int32_t index,<br></td></tr
><tr
id=sl_svn102_142

><td class="source">		uint32_t spriteId = 0, stackPosType_t type = STACKPOS_NORMAL);<br></td></tr
><tr
id=sl_svn102_143

><td class="source">	void internalGetPosition(Item* item, Position&amp; pos, uint8_t&amp; stackpos);<br></td></tr
><tr
id=sl_svn102_144

><td class="source"><br></td></tr
><tr
id=sl_svn102_145

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_146

><td class="source">	  * Get a single tile of the map.<br></td></tr
><tr
id=sl_svn102_147

><td class="source">	  * \return A pointer to the tile<br></td></tr
><tr
id=sl_svn102_148

><td class="source">		*/<br></td></tr
><tr
id=sl_svn102_149

><td class="source">	Tile* getTile(uint32_t x, uint32_t y, uint32_t z);<br></td></tr
><tr
id=sl_svn102_150

><td class="source"><br></td></tr
><tr
id=sl_svn102_151

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_152

><td class="source">	  * Set a single tile of the map, position is read from this tile<br></td></tr
><tr
id=sl_svn102_153

><td class="source">	    */<br></td></tr
><tr
id=sl_svn102_154

><td class="source">	void setTile(Tile* newtile);<br></td></tr
><tr
id=sl_svn102_155

><td class="source"><br></td></tr
><tr
id=sl_svn102_156

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_157

><td class="source">	  * Get a leaf of the map.<br></td></tr
><tr
id=sl_svn102_158

><td class="source">	  * \return A pointer to a leaf<br></td></tr
><tr
id=sl_svn102_159

><td class="source">		*/<br></td></tr
><tr
id=sl_svn102_160

><td class="source">	QTreeLeafNode* getLeaf(uint32_t x, uint32_t y);<br></td></tr
><tr
id=sl_svn102_161

><td class="source"><br></td></tr
><tr
id=sl_svn102_162

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_163

><td class="source">	  * Returns a creature based on the unique creature identifier<br></td></tr
><tr
id=sl_svn102_164

><td class="source">	  * \param id is the unique creature id to get a creature pointer to<br></td></tr
><tr
id=sl_svn102_165

><td class="source">	  * \return A Creature pointer to the creature<br></td></tr
><tr
id=sl_svn102_166

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_167

><td class="source">	Creature* getCreatureByID(uint32_t id);<br></td></tr
><tr
id=sl_svn102_168

><td class="source"><br></td></tr
><tr
id=sl_svn102_169

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_170

><td class="source">	  * Returns a player based on the unique creature identifier<br></td></tr
><tr
id=sl_svn102_171

><td class="source">	  * \param id is the unique player id to get a player pointer to<br></td></tr
><tr
id=sl_svn102_172

><td class="source">	  * \return A Pointer to the player<br></td></tr
><tr
id=sl_svn102_173

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_174

><td class="source">	Player* getPlayerByID(uint32_t id);<br></td></tr
><tr
id=sl_svn102_175

><td class="source"><br></td></tr
><tr
id=sl_svn102_176

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_177

><td class="source">	  * Returns a creature based on a string name identifier<br></td></tr
><tr
id=sl_svn102_178

><td class="source">	  * \param s is the name identifier<br></td></tr
><tr
id=sl_svn102_179

><td class="source">	  * \return A Pointer to the creature<br></td></tr
><tr
id=sl_svn102_180

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_181

><td class="source">	Creature* getCreatureByName(const std::string&amp; s);<br></td></tr
><tr
id=sl_svn102_182

><td class="source"><br></td></tr
><tr
id=sl_svn102_183

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_184

><td class="source">	  * Returns a player based on a string name identifier<br></td></tr
><tr
id=sl_svn102_185

><td class="source">	  * \param s is the name identifier<br></td></tr
><tr
id=sl_svn102_186

><td class="source">	  * \return A Pointer to the player<br></td></tr
><tr
id=sl_svn102_187

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_188

><td class="source">	Player* getPlayerByName(const std::string&amp; s);<br></td></tr
><tr
id=sl_svn102_189

><td class="source">	<br></td></tr
><tr
id=sl_svn102_190

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_191

><td class="source">	  * Returns a player based on a string name identifier, with support for the &quot;~&quot; wildcard.<br></td></tr
><tr
id=sl_svn102_192

><td class="source">	  * \param s is the name identifier, with or without wildcard<br></td></tr
><tr
id=sl_svn102_193

><td class="source">	  * \param player will point to the found player (if any)<br></td></tr
><tr
id=sl_svn102_194

><td class="source">	  * \return &quot;RET_PLAYERWITHTHISNAMEISNOTONLINE&quot; or &quot;RET_NAMEISTOOAMBIGIOUS&quot;<br></td></tr
><tr
id=sl_svn102_195

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_196

><td class="source">	ReturnValue getPlayerByNameWildcard(const std::string&amp; s, Player* &amp;player);<br></td></tr
><tr
id=sl_svn102_197

><td class="source"><br></td></tr
><tr
id=sl_svn102_198

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_199

><td class="source">	  * Returns a player based on an account number identifier<br></td></tr
><tr
id=sl_svn102_200

><td class="source">	  * \param acc is the account identifier<br></td></tr
><tr
id=sl_svn102_201

><td class="source">	  * \return A Pointer to the player<br></td></tr
><tr
id=sl_svn102_202

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_203

><td class="source">	Player* getPlayerByAccount(uint32_t acc);<br></td></tr
><tr
id=sl_svn102_204

><td class="source"><br></td></tr
><tr
id=sl_svn102_205

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_206

><td class="source">	  * Returns all players based on their account number identifier<br></td></tr
><tr
id=sl_svn102_207

><td class="source">	  * \param acc is the account identifier<br></td></tr
><tr
id=sl_svn102_208

><td class="source">	  * \return A vector of all players with the selected account number<br></td></tr
><tr
id=sl_svn102_209

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_210

><td class="source">	PlayerVector getPlayersByAccount(uint32_t acc);<br></td></tr
><tr
id=sl_svn102_211

><td class="source"><br></td></tr
><tr
id=sl_svn102_212

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_213

><td class="source">	  * Returns all players with a certain IP address<br></td></tr
><tr
id=sl_svn102_214

><td class="source">	  * \param ip is the IP address of the clients, as an unsigned long<br></td></tr
><tr
id=sl_svn102_215

><td class="source">	  * \param mask An IP mask, default 255.255.255.255<br></td></tr
><tr
id=sl_svn102_216

><td class="source">	  * \return A vector of all players with the selected IP<br></td></tr
><tr
id=sl_svn102_217

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_218

><td class="source">	PlayerVector getPlayersByIP(uint32_t ip, uint32_t mask = 0xFFFFFFFF);<br></td></tr
><tr
id=sl_svn102_219

><td class="source">	<br></td></tr
><tr
id=sl_svn102_220

><td class="source">	/** Place Creature on the map without sending out events to the surrounding.<br></td></tr
><tr
id=sl_svn102_221

><td class="source">	  * \param creature Creature to place on the map<br></td></tr
><tr
id=sl_svn102_222

><td class="source">	  * \param pos The position to place the creature<br></td></tr
><tr
id=sl_svn102_223

><td class="source">	  * \param forced If true, placing the creature will not fail because of obstacles (creatures/items)<br></td></tr
><tr
id=sl_svn102_224

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_225

><td class="source">	bool internalPlaceCreature(Creature* creature, const Position&amp; pos, bool extendedPos = false, bool forced = false);<br></td></tr
><tr
id=sl_svn102_226

><td class="source"><br></td></tr
><tr
id=sl_svn102_227

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_228

><td class="source">	  * Place Creature on the map.<br></td></tr
><tr
id=sl_svn102_229

><td class="source">	  * \param creature Creature to place on the map<br></td></tr
><tr
id=sl_svn102_230

><td class="source">	  * \param pos The position to place the creature<br></td></tr
><tr
id=sl_svn102_231

><td class="source">	  * \param forced If true, placing the creature will not fail because of obstacles (creatures/items)<br></td></tr
><tr
id=sl_svn102_232

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_233

><td class="source">	bool placeCreature(Creature* creature, const Position&amp; pos, bool extendedPos = false, bool force = false);<br></td></tr
><tr
id=sl_svn102_234

><td class="source"><br></td></tr
><tr
id=sl_svn102_235

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_236

><td class="source">	  * Remove Creature from the map.<br></td></tr
><tr
id=sl_svn102_237

><td class="source">	  * Removes the Creature the map<br></td></tr
><tr
id=sl_svn102_238

><td class="source">	  * \param c Creature to remove<br></td></tr
><tr
id=sl_svn102_239

><td class="source">      */<br></td></tr
><tr
id=sl_svn102_240

><td class="source">	bool removeCreature(Creature* creature, bool isLogout = true);<br></td></tr
><tr
id=sl_svn102_241

><td class="source">	<br></td></tr
><tr
id=sl_svn102_242

><td class="source">	void addCreatureCheck(Creature* creature);<br></td></tr
><tr
id=sl_svn102_243

><td class="source">	void removeCreatureCheck(Creature* creature);<br></td></tr
><tr
id=sl_svn102_244

><td class="source"><br></td></tr
><tr
id=sl_svn102_245

><td class="source">	uint32_t getPlayersOnline() {return (uint32_t)Player::listPlayer.list.size();}<br></td></tr
><tr
id=sl_svn102_246

><td class="source">	uint32_t getMonstersOnline() {return (uint32_t)Monster::listMonster.list.size();}<br></td></tr
><tr
id=sl_svn102_247

><td class="source">	uint32_t getNpcsOnline() {return (uint32_t)Npc::listNpc.list.size();}<br></td></tr
><tr
id=sl_svn102_248

><td class="source">	uint32_t getCreaturesOnline() {return (uint32_t)listCreature.list.size();}<br></td></tr
><tr
id=sl_svn102_249

><td class="source"><br></td></tr
><tr
id=sl_svn102_250

><td class="source">	void getWorldLightInfo(LightInfo&amp; lightInfo);<br></td></tr
><tr
id=sl_svn102_251

><td class="source"><br></td></tr
><tr
id=sl_svn102_252

><td class="source">	void getSpectators(SpectatorVec&amp; list, const Position&amp; centerPos,<br></td></tr
><tr
id=sl_svn102_253

><td class="source">		bool checkforduplicate = false, bool multifloor = false,<br></td></tr
><tr
id=sl_svn102_254

><td class="source">		int32_t minRangeX = 0, int32_t maxRangeX = 0,<br></td></tr
><tr
id=sl_svn102_255

><td class="source">		int32_t minRangeY = 0, int32_t maxRangeY = 0){<br></td></tr
><tr
id=sl_svn102_256

><td class="source">		map-&gt;getSpectators(list, centerPos, checkforduplicate, multifloor, minRangeX, maxRangeX, minRangeY, maxRangeY);<br></td></tr
><tr
id=sl_svn102_257

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_258

><td class="source">	<br></td></tr
><tr
id=sl_svn102_259

><td class="source">	const SpectatorVec&amp; getSpectators(const Position&amp; centerPos){<br></td></tr
><tr
id=sl_svn102_260

><td class="source">		return map-&gt;getSpectators(centerPos);<br></td></tr
><tr
id=sl_svn102_261

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_262

><td class="source">    <br></td></tr
><tr
id=sl_svn102_263

><td class="source">	void clearSpectatorCache(){<br></td></tr
><tr
id=sl_svn102_264

><td class="source">		if(map){<br></td></tr
><tr
id=sl_svn102_265

><td class="source">			map-&gt;clearSpectatorCache();<br></td></tr
><tr
id=sl_svn102_266

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_267

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_268

><td class="source">    <br></td></tr
><tr
id=sl_svn102_269

><td class="source"><br></td></tr
><tr
id=sl_svn102_270

><td class="source">	ReturnValue internalMoveCreature(Creature* creature, Direction direction, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_271

><td class="source">	ReturnValue internalMoveCreature(Creature* creature, Cylinder* fromCylinder, Cylinder* toCylinder, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_272

><td class="source"><br></td></tr
><tr
id=sl_svn102_273

><td class="source">	ReturnValue internalMoveItem(Cylinder* fromCylinder, Cylinder* toCylinder, int32_t index,<br></td></tr
><tr
id=sl_svn102_274

><td class="source">		Item* item, uint32_t count, Item** _moveItem, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_275

><td class="source"><br></td></tr
><tr
id=sl_svn102_276

><td class="source">	ReturnValue internalAddItem(Cylinder* toCylinder, Item* item, int32_t index = INDEX_WHEREEVER,<br></td></tr
><tr
id=sl_svn102_277

><td class="source">		uint32_t flags = 0, bool test = false);<br></td></tr
><tr
id=sl_svn102_278

><td class="source">	ReturnValue internalRemoveItem(Item* item, int32_t count = -1,  bool test = false, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_279

><td class="source"><br></td></tr
><tr
id=sl_svn102_280

><td class="source">	ReturnValue internalPlayerAddItem(Player* player, Item* item, bool dropOnMap = true);<br></td></tr
><tr
id=sl_svn102_281

><td class="source"><br></td></tr
><tr
id=sl_svn102_282

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_283

><td class="source">	  * Find an item of a certain type<br></td></tr
><tr
id=sl_svn102_284

><td class="source">	  * \param cylinder to search the item<br></td></tr
><tr
id=sl_svn102_285

><td class="source">	  * \param itemId is the item to remove<br></td></tr
><tr
id=sl_svn102_286

><td class="source">	  * \param depthSearch if true it will check child containers aswell<br></td></tr
><tr
id=sl_svn102_287

><td class="source">	  * \param subType is the extra type an item can have such as charges/fluidtype, default is -1<br></td></tr
><tr
id=sl_svn102_288

><td class="source">		* meaning it&#39;s not used<br></td></tr
><tr
id=sl_svn102_289

><td class="source">	  * \return A pointer to the item to an item and NULL if not found<br></td></tr
><tr
id=sl_svn102_290

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_291

><td class="source">	Item* findItemOfType(Cylinder* cylinder, uint16_t itemId,<br></td></tr
><tr
id=sl_svn102_292

><td class="source">		bool depthSearch = true, int32_t subType = -1);<br></td></tr
><tr
id=sl_svn102_293

><td class="source"><br></td></tr
><tr
id=sl_svn102_294

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_295

><td class="source">	  * Remove item(s) of a certain type<br></td></tr
><tr
id=sl_svn102_296

><td class="source">	  * \param cylinder to remove the item(s) from<br></td></tr
><tr
id=sl_svn102_297

><td class="source">	  * \param itemId is the item to remove<br></td></tr
><tr
id=sl_svn102_298

><td class="source">	  * \param count is the amount to remove<br></td></tr
><tr
id=sl_svn102_299

><td class="source">	  * \param subType is the extra type an item can have such as charges/fluidtype, default is -1<br></td></tr
><tr
id=sl_svn102_300

><td class="source">		* meaning it&#39;s not used<br></td></tr
><tr
id=sl_svn102_301

><td class="source">	  * \return true if the removal was successful<br></td></tr
><tr
id=sl_svn102_302

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_303

><td class="source">	bool removeItemOfType(Cylinder* cylinder, uint16_t itemId, int32_t count, int32_t subType = -1);<br></td></tr
><tr
id=sl_svn102_304

><td class="source"><br></td></tr
><tr
id=sl_svn102_305

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_306

><td class="source">	  * Get the amount of money in a a cylinder<br></td></tr
><tr
id=sl_svn102_307

><td class="source">	  * \return the amount of money found<br></td></tr
><tr
id=sl_svn102_308

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_309

><td class="source">	uint32_t getMoney(const Cylinder* cylinder);<br></td></tr
><tr
id=sl_svn102_310

><td class="source"><br></td></tr
><tr
id=sl_svn102_311

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_312

><td class="source">	  * Remove item(s) with a monetary value<br></td></tr
><tr
id=sl_svn102_313

><td class="source">	  * \param cylinder to remove the money from<br></td></tr
><tr
id=sl_svn102_314

><td class="source">	  * \param money is the amount to remove<br></td></tr
><tr
id=sl_svn102_315

><td class="source">	  * \param flags optional flags to modifiy the default behaviour<br></td></tr
><tr
id=sl_svn102_316

><td class="source">	  * \return true if the removal was successful<br></td></tr
><tr
id=sl_svn102_317

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_318

><td class="source">	bool removeMoney(Cylinder* cylinder, int32_t money, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_319

><td class="source">	<br></td></tr
><tr
id=sl_svn102_320

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_321

><td class="source">	  * Add item(s) with monetary value<br></td></tr
><tr
id=sl_svn102_322

><td class="source">	  * \param cylinder which will receive money<br></td></tr
><tr
id=sl_svn102_323

><td class="source">	  * \param money the amount to give<br></td></tr
><tr
id=sl_svn102_324

><td class="source">	  * \param flags optional flags to modify default behavior<br></td></tr
><tr
id=sl_svn102_325

><td class="source">	  * \return true<br></td></tr
><tr
id=sl_svn102_326

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_327

><td class="source">	bool addMoney(Cylinder* cylinder, int32_t money, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_328

><td class="source"><br></td></tr
><tr
id=sl_svn102_329

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_330

><td class="source">	  * Transform one item to another type/count<br></td></tr
><tr
id=sl_svn102_331

><td class="source">	  * \param item is the item to transform<br></td></tr
><tr
id=sl_svn102_332

><td class="source">	  * \param newtype is the new type<br></td></tr
><tr
id=sl_svn102_333

><td class="source">	  * \param newCount is the new count value, use default value (-1) to not change it<br></td></tr
><tr
id=sl_svn102_334

><td class="source">	  * \return true if the tranformation was successful<br></td></tr
><tr
id=sl_svn102_335

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_336

><td class="source">	Item* transformItem(Item* item, uint16_t newId, int32_t newCount = -1);<br></td></tr
><tr
id=sl_svn102_337

><td class="source"><br></td></tr
><tr
id=sl_svn102_338

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_339

><td class="source">	  * Teleports an object to another position<br></td></tr
><tr
id=sl_svn102_340

><td class="source">	  * \param thing is the object to teleport<br></td></tr
><tr
id=sl_svn102_341

><td class="source">	  * \param newPos is the new position<br></td></tr
><tr
id=sl_svn102_342

><td class="source">	  * \param flags optional flags to modify default behavior<br></td></tr
><tr
id=sl_svn102_343

><td class="source">	  * \return true if the teleportation was successful<br></td></tr
><tr
id=sl_svn102_344

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_345

><td class="source">	ReturnValue internalTeleport(Thing* thing, const Position&amp; newPos, uint32_t flags = 0);<br></td></tr
><tr
id=sl_svn102_346

><td class="source"><br></td></tr
><tr
id=sl_svn102_347

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_348

><td class="source">		* Turn a creature to a different direction.<br></td></tr
><tr
id=sl_svn102_349

><td class="source">		* \param creature Creature to change the direction<br></td></tr
><tr
id=sl_svn102_350

><td class="source">		* \param dir Direction to turn to<br></td></tr
><tr
id=sl_svn102_351

><td class="source">		*/<br></td></tr
><tr
id=sl_svn102_352

><td class="source">	bool internalCreatureTurn(Creature* creature, Direction dir);<br></td></tr
><tr
id=sl_svn102_353

><td class="source"><br></td></tr
><tr
id=sl_svn102_354

><td class="source">	/**<br></td></tr
><tr
id=sl_svn102_355

><td class="source">	  * Creature wants to say something.<br></td></tr
><tr
id=sl_svn102_356

><td class="source">	  * \param creature Creature pointer<br></td></tr
><tr
id=sl_svn102_357

><td class="source">	  * \param type Type of message<br></td></tr
><tr
id=sl_svn102_358

><td class="source">	  * \param text The text to say<br></td></tr
><tr
id=sl_svn102_359

><td class="source">	  */<br></td></tr
><tr
id=sl_svn102_360

><td class="source">	bool internalCreatureSay(Creature* creature, SpeakClasses type, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_361

><td class="source"><br></td></tr
><tr
id=sl_svn102_362

><td class="source">	bool internalStartTrade(Player* player, Player* partner, Item* tradeItem);<br></td></tr
><tr
id=sl_svn102_363

><td class="source">	bool internalCloseTrade(Player* player);<br></td></tr
><tr
id=sl_svn102_364

><td class="source">	bool internalBroadcastMessage(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_365

><td class="source">	<br></td></tr
><tr
id=sl_svn102_366

><td class="source">	bool anonymousBroadcastMessage(MessageClasses type, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_367

><td class="source"><br></td></tr
><tr
id=sl_svn102_368

><td class="source">	//Implementation of player invoked events<br></td></tr
><tr
id=sl_svn102_369

><td class="source">	bool playerMoveThing(uint32_t playerId, const Position&amp; fromPos, uint16_t spriteId, uint8_t fromStackPos,<br></td></tr
><tr
id=sl_svn102_370

><td class="source">		const Position&amp; toPos, uint8_t count);<br></td></tr
><tr
id=sl_svn102_371

><td class="source">	bool playerMoveCreature(uint32_t playerId, uint32_t movingCreatureId,<br></td></tr
><tr
id=sl_svn102_372

><td class="source">		const Position&amp; movingCreatureOrigPos, const Position&amp; toPos);<br></td></tr
><tr
id=sl_svn102_373

><td class="source">	bool playerMoveItem(uint32_t playerId, const Position&amp; fromPos,<br></td></tr
><tr
id=sl_svn102_374

><td class="source">		uint16_t spriteId, uint8_t fromStackPos, const Position&amp; toPos, uint8_t count);<br></td></tr
><tr
id=sl_svn102_375

><td class="source">	bool playerMove(uint32_t playerId, Direction dir);<br></td></tr
><tr
id=sl_svn102_376

><td class="source">	bool playerCreatePrivateChannel(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_377

><td class="source">	bool playerChannelInvite(uint32_t playerId, const std::string&amp; name);<br></td></tr
><tr
id=sl_svn102_378

><td class="source">	bool playerChannelExclude(uint32_t playerId, const std::string&amp; name);<br></td></tr
><tr
id=sl_svn102_379

><td class="source">	bool playerRequestChannels(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_380

><td class="source">	bool playerOpenChannel(uint32_t playerId, uint16_t channelId);<br></td></tr
><tr
id=sl_svn102_381

><td class="source">	bool playerCloseChannel(uint32_t playerId, uint16_t channelId);<br></td></tr
><tr
id=sl_svn102_382

><td class="source">	bool playerOpenPrivateChannel(uint32_t playerId, const std::string&amp; receiver);bool playerProcessRuleViolation(uint32_t playerId, const std::string&amp; name);<br></td></tr
><tr
id=sl_svn102_383

><td class="source">	bool playerCloseRuleViolation(uint32_t playerId, const std::string&amp; name);<br></td></tr
><tr
id=sl_svn102_384

><td class="source">	bool playerCancelRuleViolation(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_385

><td class="source">	bool playerReceivePing(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_386

><td class="source">	bool playerAutoWalk(uint32_t playerId, std::list&lt;Direction&gt;&amp; listDir);<br></td></tr
><tr
id=sl_svn102_387

><td class="source">	bool playerStopAutoWalk(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_388

><td class="source">	bool playerUseItemEx(uint32_t playerId, const Position&amp; fromPos, uint8_t fromStackPos,<br></td></tr
><tr
id=sl_svn102_389

><td class="source">		uint16_t fromSpriteId, const Position&amp; toPos, uint8_t toStackPos, uint16_t toSpriteId);<br></td></tr
><tr
id=sl_svn102_390

><td class="source">	bool playerUseItem(uint32_t playerId, const Position&amp; pos, uint8_t stackPos,<br></td></tr
><tr
id=sl_svn102_391

><td class="source">		uint8_t index, uint16_t spriteId);<br></td></tr
><tr
id=sl_svn102_392

><td class="source">	bool playerUseBattleWindow(uint32_t playerId, const Position&amp; fromPos,<br></td></tr
><tr
id=sl_svn102_393

><td class="source">		uint8_t fromStackPos, uint32_t creatureId, uint16_t spriteId);<br></td></tr
><tr
id=sl_svn102_394

><td class="source">	bool playerCloseContainer(uint32_t playerId, uint8_t cid);<br></td></tr
><tr
id=sl_svn102_395

><td class="source">	bool playerMoveUpContainer(uint32_t playerId, uint8_t cid);<br></td></tr
><tr
id=sl_svn102_396

><td class="source">	bool playerUpdateContainer(uint32_t playerId, uint8_t cid);<br></td></tr
><tr
id=sl_svn102_397

><td class="source">	bool playerUpdateTile(uint32_t playerId, const Position&amp; pos);<br></td></tr
><tr
id=sl_svn102_398

><td class="source">	bool playerRotateItem(uint32_t playerId, const Position&amp; pos, uint8_t stackPos, const uint16_t spriteId);<br></td></tr
><tr
id=sl_svn102_399

><td class="source">	bool playerWriteItem(uint32_t playerId, uint32_t windowTextId, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_400

><td class="source">	bool playerUpdateHouseWindow(uint32_t playerId, uint8_t listId, uint32_t windowTextId, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_401

><td class="source">	bool playerRequestTrade(uint32_t playerId, const Position&amp; pos, uint8_t stackPos,<br></td></tr
><tr
id=sl_svn102_402

><td class="source">		uint32_t tradePlayerId, uint16_t spriteId);<br></td></tr
><tr
id=sl_svn102_403

><td class="source">	bool playerAcceptTrade(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_404

><td class="source">	bool playerLookInTrade(uint32_t playerId, bool lookAtCounterOffer, int index);<br></td></tr
><tr
id=sl_svn102_405

><td class="source">	bool playerCloseTrade(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_406

><td class="source">	bool playerSetAttackedCreature(uint32_t playerId, uint32_t creatureId);<br></td></tr
><tr
id=sl_svn102_407

><td class="source">	bool playerFollowCreature(uint32_t playerId, uint32_t creatureId);<br></td></tr
><tr
id=sl_svn102_408

><td class="source">	bool playerCancelAttackAndFollow(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_409

><td class="source">	bool playerSetFightModes(uint32_t playerId, fightMode_t fightMode, chaseMode_t chaseMode, bool safeMode);<br></td></tr
><tr
id=sl_svn102_410

><td class="source">	bool playerLookAt(uint32_t playerId, const Position&amp; pos, uint16_t spriteId, uint8_t stackPos);<br></td></tr
><tr
id=sl_svn102_411

><td class="source">	bool playerRequestAddVip(uint32_t playerId, const std::string&amp; name);<br></td></tr
><tr
id=sl_svn102_412

><td class="source">	bool playerRequestRemoveVip(uint32_t playerId, uint32_t guid);<br></td></tr
><tr
id=sl_svn102_413

><td class="source">	bool playerTurn(uint32_t playerId, Direction dir);<br></td></tr
><tr
id=sl_svn102_414

><td class="source">	bool playerRequestOutfit(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_415

><td class="source">	bool playerSay(uint32_t playerId, uint16_t channelId, SpeakClasses type,<br></td></tr
><tr
id=sl_svn102_416

><td class="source">		const std::string&amp; receiver, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_417

><td class="source">	bool playerChangeOutfit(uint32_t playerId, Outfit_t outfit);<br></td></tr
><tr
id=sl_svn102_418

><td class="source">	bool playerInviteToParty(uint32_t playerId, uint32_t invitedId);<br></td></tr
><tr
id=sl_svn102_419

><td class="source">	bool playerJoinParty(uint32_t playerId, uint32_t leaderId);<br></td></tr
><tr
id=sl_svn102_420

><td class="source">	bool playerRevokePartyInvitation(uint32_t playerId, uint32_t invitedId);<br></td></tr
><tr
id=sl_svn102_421

><td class="source">	bool playerPassPartyLeadership(uint32_t playerId, uint32_t newLeaderId);<br></td></tr
><tr
id=sl_svn102_422

><td class="source">	bool playerLeaveParty(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_423

><td class="source"><br></td></tr
><tr
id=sl_svn102_424

><td class="source">	bool bugReport(uint32_t playerId, std::string report);<br></td></tr
><tr
id=sl_svn102_425

><td class="source">	bool violationWindow(uint32_t playerId, std::string name, uint8_t reason, std::string comment, uint8_t action, bool IPBanishment);<br></td></tr
><tr
id=sl_svn102_426

><td class="source"><br></td></tr
><tr
id=sl_svn102_427

><td class="source">	void cleanup();<br></td></tr
><tr
id=sl_svn102_428

><td class="source">	void shutdown();<br></td></tr
><tr
id=sl_svn102_429

><td class="source">	void FreeThing(Thing* thing);<br></td></tr
><tr
id=sl_svn102_430

><td class="source"><br></td></tr
><tr
id=sl_svn102_431

><td class="source">	bool canThrowObjectTo(const Position&amp; fromPos, const Position&amp; toPos, bool checkLineOfSight = true,<br></td></tr
><tr
id=sl_svn102_432

><td class="source">		int32_t rangex = Map::maxClientViewportX, int32_t rangey = Map::maxClientViewportY);<br></td></tr
><tr
id=sl_svn102_433

><td class="source">	bool isSightClear(const Position&amp; fromPos, const Position&amp; toPos, bool sameFloor);<br></td></tr
><tr
id=sl_svn102_434

><td class="source"><br></td></tr
><tr
id=sl_svn102_435

><td class="source">	bool getPathTo(const Creature* creature, const Position&amp; destPos,<br></td></tr
><tr
id=sl_svn102_436

><td class="source">		std::list&lt;Direction&gt;&amp; listDir, int32_t maxSearchDist /*= -1*/);<br></td></tr
><tr
id=sl_svn102_437

><td class="source"><br></td></tr
><tr
id=sl_svn102_438

><td class="source">	bool getPathToEx(const Creature* creature, const Position&amp; targetPos, std::list&lt;Direction&gt;&amp; dirList,<br></td></tr
><tr
id=sl_svn102_439

><td class="source">		const FindPathParams&amp; fpp);<br></td></tr
><tr
id=sl_svn102_440

><td class="source"><br></td></tr
><tr
id=sl_svn102_441

><td class="source">	bool getPathToEx(const Creature* creature, const Position&amp; targetPos, std::list&lt;Direction&gt;&amp; dirList,<br></td></tr
><tr
id=sl_svn102_442

><td class="source">		uint32_t minTargetDist, uint32_t maxTargetDist, bool fullPathSearch = true,<br></td></tr
><tr
id=sl_svn102_443

><td class="source">		bool clearSight = true, int32_t maxSearchDist = -1);<br></td></tr
><tr
id=sl_svn102_444

><td class="source"><br></td></tr
><tr
id=sl_svn102_445

><td class="source">	void changeSpeed(Creature* creature, int32_t varSpeedDelta);<br></td></tr
><tr
id=sl_svn102_446

><td class="source">	void internalCreatureChangeOutfit(Creature* creature, const Outfit_t&amp; oufit);<br></td></tr
><tr
id=sl_svn102_447

><td class="source">	void internalCreatureChangeVisible(Creature* creature, bool visible);<br></td></tr
><tr
id=sl_svn102_448

><td class="source">	void changeLight(const Creature* creature);<br></td></tr
><tr
id=sl_svn102_449

><td class="source"><br></td></tr
><tr
id=sl_svn102_450

><td class="source">#ifdef __SKULLSYSTEM__<br></td></tr
><tr
id=sl_svn102_451

><td class="source">	void updateCreatureSkull(Player* player);<br></td></tr
><tr
id=sl_svn102_452

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_453

><td class="source"><br></td></tr
><tr
id=sl_svn102_454

><td class="source">	GameState_t getGameState();<br></td></tr
><tr
id=sl_svn102_455

><td class="source">	void setGameState(GameState_t newState);<br></td></tr
><tr
id=sl_svn102_456

><td class="source">	bool saveServer(bool globalSave);<br></td></tr
><tr
id=sl_svn102_457

><td class="source">	void saveGameState();<br></td></tr
><tr
id=sl_svn102_458

><td class="source">	void loadGameState();<br></td></tr
><tr
id=sl_svn102_459

><td class="source">	void refreshMap(Map::TileMap::iterator* begin = NULL, int clean_max = 0);<br></td></tr
><tr
id=sl_svn102_460

><td class="source">	void proceduralRefresh(Map::TileMap::iterator* begin = NULL);<br></td></tr
><tr
id=sl_svn102_461

><td class="source"><br></td></tr
><tr
id=sl_svn102_462

><td class="source">	//Events<br></td></tr
><tr
id=sl_svn102_463

><td class="source">	void checkCreatureWalk(uint32_t creatureId);<br></td></tr
><tr
id=sl_svn102_464

><td class="source">	void updateCreatureWalk(uint32_t creatureId);<br></td></tr
><tr
id=sl_svn102_465

><td class="source">	void checkCreatureAttack(uint32_t creatureId);<br></td></tr
><tr
id=sl_svn102_466

><td class="source">	void checkCreatures();<br></td></tr
><tr
id=sl_svn102_467

><td class="source">	void checkLight();<br></td></tr
><tr
id=sl_svn102_468

><td class="source">	bool kickPlayer(uint32_t playerId);<br></td></tr
><tr
id=sl_svn102_469

><td class="source"><br></td></tr
><tr
id=sl_svn102_470

><td class="source">	bool combatBlockHit(CombatType_t combatType, Creature* attacker, Creature* target,<br></td></tr
><tr
id=sl_svn102_471

><td class="source">		int32_t&amp; healthChange, bool checkDefense, bool checkArmor);<br></td></tr
><tr
id=sl_svn102_472

><td class="source"><br></td></tr
><tr
id=sl_svn102_473

><td class="source">	bool combatChangeHealth(CombatType_t combatType, Creature* attacker, Creature* target, int32_t healthChange);<br></td></tr
><tr
id=sl_svn102_474

><td class="source">	bool combatChangeMana(Creature* attacker, Creature* target, int32_t manaChange);<br></td></tr
><tr
id=sl_svn102_475

><td class="source">	bool combatChangeHealth(CombatType_t combatType, MagicEffectClasses hitEffect,<br></td></tr
><tr
id=sl_svn102_476

><td class="source">		TextColor_t customTextColor, Creature* attacker, Creature* target, int32_t healthChange);<br></td></tr
><tr
id=sl_svn102_477

><td class="source"><br></td></tr
><tr
id=sl_svn102_478

><td class="source">	//animation help functions<br></td></tr
><tr
id=sl_svn102_479

><td class="source">	void addCreatureHealth(const Creature* target);<br></td></tr
><tr
id=sl_svn102_480

><td class="source">	void addCreatureHealth(const SpectatorVec&amp; list, const Creature* target);<br></td></tr
><tr
id=sl_svn102_481

><td class="source">	void addAnimatedText(const Position&amp; pos, uint8_t textColor,<br></td></tr
><tr
id=sl_svn102_482

><td class="source">		const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_483

><td class="source">	void addAnimatedText(const SpectatorVec&amp; list, const Position&amp; pos, uint8_t textColor,<br></td></tr
><tr
id=sl_svn102_484

><td class="source">		const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_485

><td class="source">	void addMagicEffect(const Position&amp; pos, uint8_t effect);<br></td></tr
><tr
id=sl_svn102_486

><td class="source">	void addMagicEffect(const SpectatorVec&amp; list, const Position&amp; pos, uint8_t effect);<br></td></tr
><tr
id=sl_svn102_487

><td class="source">	void addDistanceEffect(const Position&amp; fromPos, const Position&amp; toPos,<br></td></tr
><tr
id=sl_svn102_488

><td class="source">	uint8_t effect);<br></td></tr
><tr
id=sl_svn102_489

><td class="source">	<br></td></tr
><tr
id=sl_svn102_490

><td class="source">	std::string getTradeErrorDescription(ReturnValue ret, Item* item);<br></td></tr
><tr
id=sl_svn102_491

><td class="source"><br></td></tr
><tr
id=sl_svn102_492

><td class="source">	void startDecay(Item* item);<br></td></tr
><tr
id=sl_svn102_493

><td class="source"><br></td></tr
><tr
id=sl_svn102_494

><td class="source">	Map* getMap() { return map;}<br></td></tr
><tr
id=sl_svn102_495

><td class="source">	const Map* getMap() const { return map;}<br></td></tr
><tr
id=sl_svn102_496

><td class="source"><br></td></tr
><tr
id=sl_svn102_497

><td class="source">	int getLightHour() {return light_hour;}<br></td></tr
><tr
id=sl_svn102_498

><td class="source"><br></td></tr
><tr
id=sl_svn102_499

><td class="source">	void addCommandTag(std::string tag);<br></td></tr
><tr
id=sl_svn102_500

><td class="source">	void resetCommandTag();<br></td></tr
><tr
id=sl_svn102_501

><td class="source">	<br></td></tr
><tr
id=sl_svn102_502

><td class="source">	const RuleViolationsMap&amp; getRuleViolations() const {return ruleViolations;}<br></td></tr
><tr
id=sl_svn102_503

><td class="source">	bool cancelRuleViolation(Player* player);<br></td></tr
><tr
id=sl_svn102_504

><td class="source">	bool closeRuleViolation(Player* player);<br></td></tr
><tr
id=sl_svn102_505

><td class="source"><br></td></tr
><tr
id=sl_svn102_506

><td class="source">	void doDeathDelay(Creature* creature);<br></td></tr
><tr
id=sl_svn102_507

><td class="source">	void loadPlayersRecord();<br></td></tr
><tr
id=sl_svn102_508

><td class="source">	void reloadInfo(ReloadTypes_t info);<br></td></tr
><tr
id=sl_svn102_509

><td class="source"><br></td></tr
><tr
id=sl_svn102_510

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_511

><td class="source">    bool playerSayCommand(Player* player, SpeakClasses type, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_512

><td class="source">	bool playerSaySpell(Player* player, SpeakClasses type, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_513

><td class="source">	bool playerWhisper(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_514

><td class="source">	bool playerYell(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_515

><td class="source">	bool playerSpeakTo(Player* player, SpeakClasses type, const std::string&amp; receiver, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_516

><td class="source">	bool playerTalkToChannel(Player* player, SpeakClasses type, const std::string&amp; text, unsigned short channelId);<br></td></tr
><tr
id=sl_svn102_517

><td class="source">	bool playerSpeakToNpc(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_518

><td class="source">	bool playerReportRuleViolation(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_519

><td class="source">	bool playerContinueReport(Player* player, const std::string&amp; text);<br></td></tr
><tr
id=sl_svn102_520

><td class="source">          <br></td></tr
><tr
id=sl_svn102_521

><td class="source">	std::vector&lt;Thing*&gt; ToReleaseThings;<br></td></tr
><tr
id=sl_svn102_522

><td class="source"><br></td></tr
><tr
id=sl_svn102_523

><td class="source">	//list of items that are in trading state, mapped to the player<br></td></tr
><tr
id=sl_svn102_524

><td class="source">	std::map&lt;Item*, uint32_t&gt; tradeItems;<br></td></tr
><tr
id=sl_svn102_525

><td class="source"><br></td></tr
><tr
id=sl_svn102_526

><td class="source">	//list of reported rule violations, for correct channel listing<br></td></tr
><tr
id=sl_svn102_527

><td class="source">	RuleViolationsMap ruleViolations;<br></td></tr
><tr
id=sl_svn102_528

><td class="source"><br></td></tr
><tr
id=sl_svn102_529

><td class="source">	AutoList&lt;Creature&gt; listCreature;<br></td></tr
><tr
id=sl_svn102_530

><td class="source">	size_t checkCreatureLastIndex;<br></td></tr
><tr
id=sl_svn102_531

><td class="source">	std::vector&lt;Creature*&gt; checkCreatureVectors[EVENT_CREATURECOUNT];<br></td></tr
><tr
id=sl_svn102_532

><td class="source"><br></td></tr
><tr
id=sl_svn102_533

><td class="source">	struct GameEvent<br></td></tr
><tr
id=sl_svn102_534

><td class="source">	{<br></td></tr
><tr
id=sl_svn102_535

><td class="source">		int64_t  tick;<br></td></tr
><tr
id=sl_svn102_536

><td class="source">		int      type;<br></td></tr
><tr
id=sl_svn102_537

><td class="source">		void*    data;<br></td></tr
><tr
id=sl_svn102_538

><td class="source">	};<br></td></tr
><tr
id=sl_svn102_539

><td class="source"><br></td></tr
><tr
id=sl_svn102_540

><td class="source">	void checkDecay();<br></td></tr
><tr
id=sl_svn102_541

><td class="source">	void internalDecayItem(Item* item);<br></td></tr
><tr
id=sl_svn102_542

><td class="source"><br></td></tr
><tr
id=sl_svn102_543

><td class="source">	typedef std::list&lt;Item*&gt; DecayList;<br></td></tr
><tr
id=sl_svn102_544

><td class="source">	DecayList decayItems[EVENT_DECAY_BUCKETS];<br></td></tr
><tr
id=sl_svn102_545

><td class="source">	DecayList toDecayItems;<br></td></tr
><tr
id=sl_svn102_546

><td class="source">	size_t last_bucket;<br></td></tr
><tr
id=sl_svn102_547

><td class="source"><br></td></tr
><tr
id=sl_svn102_548

><td class="source">	static const int LIGHT_LEVEL_DAY = 250;<br></td></tr
><tr
id=sl_svn102_549

><td class="source">	static const int LIGHT_LEVEL_NIGHT = 40;<br></td></tr
><tr
id=sl_svn102_550

><td class="source">	static const int SUNSET = 1305;<br></td></tr
><tr
id=sl_svn102_551

><td class="source">	static const int SUNRISE = 430;<br></td></tr
><tr
id=sl_svn102_552

><td class="source">	int lightlevel;<br></td></tr
><tr
id=sl_svn102_553

><td class="source">	LightState_t light_state;<br></td></tr
><tr
id=sl_svn102_554

><td class="source">	int light_hour;<br></td></tr
><tr
id=sl_svn102_555

><td class="source">	int light_hour_delta;<br></td></tr
><tr
id=sl_svn102_556

><td class="source"><br></td></tr
><tr
id=sl_svn102_557

><td class="source">	uint32_t maxPlayers;<br></td></tr
><tr
id=sl_svn102_558

><td class="source">	uint32_t inFightTicks;<br></td></tr
><tr
id=sl_svn102_559

><td class="source">	uint32_t exhaustionTicks;<br></td></tr
><tr
id=sl_svn102_560

><td class="source">	uint32_t fightExhaustionTicks;<br></td></tr
><tr
id=sl_svn102_561

><td class="source">	uint32_t healExhaustionTicks;<br></td></tr
><tr
id=sl_svn102_562

><td class="source"><br></td></tr
><tr
id=sl_svn102_563

><td class="source">	void checkPlayersRecord();<br></td></tr
><tr
id=sl_svn102_564

><td class="source">	uint16_t lastPlayersRecord;<br></td></tr
><tr
id=sl_svn102_565

><td class="source"><br></td></tr
><tr
id=sl_svn102_566

><td class="source">	GameState_t gameState;<br></td></tr
><tr
id=sl_svn102_567

><td class="source">	WorldType_t worldType;<br></td></tr
><tr
id=sl_svn102_568

><td class="source"><br></td></tr
><tr
id=sl_svn102_569

><td class="source">	Map* map;<br></td></tr
><tr
id=sl_svn102_570

><td class="source"><br></td></tr
><tr
id=sl_svn102_571

><td class="source">	std::vector&lt;std::string&gt; commandTags;<br></td></tr
><tr
id=sl_svn102_572

><td class="source">};<br></td></tr
><tr
id=sl_svn102_573

><td class="source"><br></td></tr
><tr
id=sl_svn102_574

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn102_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn102_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/avesta74/source/detail?spec=svn102&amp;r=97">r97</a>
 by r...@ymail.com
 on Sep 29, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=97&amp;format=side&amp;path=/trunk/src/game.h&amp;old_path=/trunk/src/game.h&amp;old=91">Diff</a>
 </div>
 <pre>more fixes</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/avesta74/source/detail?r=97&spec=svn102';
 var publish_url = '/p/avesta74/source/detail?r=97&spec=svn102#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/data/creaturescripts/scripts/stages.lua');
 changed_urls.push('/p/avesta74/source/browse/trunk/data/creaturescripts/scripts/stages.lua?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/data/functions.lua');
 changed_urls.push('/p/avesta74/source/browse/trunk/data/functions.lua?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/data/game_classes/bitwise.lua');
 changed_urls.push('/p/avesta74/source/browse/trunk/data/game_classes/bitwise.lua?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/data/global.lua');
 changed_urls.push('/p/avesta74/source/browse/trunk/data/global.lua?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/data/raids/scripts/raidevent.lua');
 changed_urls.push('/p/avesta74/source/browse/trunk/data/raids/scripts/raidevent.lua?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/const.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/const.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/database.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/database.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasemysql.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasemysql.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasemysql.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasemysql.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasesqlite.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasesqlite.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasesqlite.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasesqlite.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/enums.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/enums.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/game.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/game.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/game.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/game.h?r\x3d97\x26spec\x3dsvn102');
 
 var selected_path = '/trunk/src/game.h';
 
 
 changed_paths.push('/trunk/src/ioplayer.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.cpp?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/thing.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/thing.h?r\x3d97\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/vocation.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/vocation.h?r\x3d97\x26spec\x3dsvn102');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/avesta74/source/browse/trunk/data/creaturescripts/scripts/stages.lua?r=97&amp;spec=svn102"
 
 >...eaturescripts/scripts/stages.lua</option>
 
 <option value="/p/avesta74/source/browse/trunk/data/functions.lua?r=97&amp;spec=svn102"
 
 >/trunk/data/functions.lua</option>
 
 <option value="/p/avesta74/source/browse/trunk/data/game_classes/bitwise.lua?r=97&amp;spec=svn102"
 
 >...nk/data/game_classes/bitwise.lua</option>
 
 <option value="/p/avesta74/source/browse/trunk/data/global.lua?r=97&amp;spec=svn102"
 
 >/trunk/data/global.lua</option>
 
 <option value="/p/avesta74/source/browse/trunk/data/raids/scripts/raidevent.lua?r=97&amp;spec=svn102"
 
 >...data/raids/scripts/raidevent.lua</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/const.h?r=97&amp;spec=svn102"
 
 >/trunk/src/const.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/creature.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.h?r=97&amp;spec=svn102"
 
 >/trunk/src/creature.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/database.h?r=97&amp;spec=svn102"
 
 >/trunk/src/database.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasemysql.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/databasemysql.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasemysql.h?r=97&amp;spec=svn102"
 
 >/trunk/src/databasemysql.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasesqlite.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/databasesqlite.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasesqlite.h?r=97&amp;spec=svn102"
 
 >/trunk/src/databasesqlite.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/enums.h?r=97&amp;spec=svn102"
 
 >/trunk/src/enums.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/game.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/game.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/game.h?r=97&amp;spec=svn102"
 selected="selected"
 >/trunk/src/game.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/ioplayer.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/item.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.h?r=97&amp;spec=svn102"
 
 >/trunk/src/item.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/luascript.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.h?r=97&amp;spec=svn102"
 
 >/trunk/src/luascript.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.cpp?r=97&amp;spec=svn102"
 
 >/trunk/src/player.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.h?r=97&amp;spec=svn102"
 
 >/trunk/src/player.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/thing.h?r=97&amp;spec=svn102"
 
 >/trunk/src/thing.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/vocation.h?r=97&amp;spec=svn102"
 
 >/trunk/src/vocation.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=91">r91</a>
 by r...@ymail.com
 on Jul 17, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=91&amp;format=side&amp;path=/trunk/src/game.h&amp;old_path=/trunk/src/game.h&amp;old=20">Diff</a>
 <br>
 <pre class="ifOpened">compilation fix and some minor changes</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=20">r20</a>
 by RSXQ66
 on Aug 19, 2010
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=20&amp;format=side&amp;path=/trunk/src/game.h&amp;old_path=/trunk/src/game.h&amp;old=7">Diff</a>
 <br>
 <pre class="ifOpened">* removed gm invisible (did debug)
* removed xml exp stages (use lua)
* added possibility to recompile
server for 76 (__76__ def)</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=7">r7</a>
 by RSXQ66
 on Jul 23, 2010
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=7&amp;format=side&amp;path=/trunk/src/game.h&amp;old_path=/trunk/src/game.h&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">[No log message]</pre>
 </div>
 
 
 <a href="/p/avesta74/source/list?path=/trunk/src/game.h&start=97">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 21658 bytes,
 574 lines</div>
 
 <div><a href="//avesta74.googlecode.com/svn/trunk/src/game.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn102': '/trunk/src/game.h'}
 codereviews = CR_controller.setup(
 {"projectName": "avesta74", "loggedInUserEmail": "jose.guitian@coremain.com", "token": "ABZ6GAcJBXkK4fAaQRFbapzVyZsBLio2nQ:1406096493334", "profileUrl": "/u/108692122734644646415/", "relativeBaseUrl": "", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "domainName": null, "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "projectHomeUrl": "/p/avesta74"}, '', 'svn102', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

