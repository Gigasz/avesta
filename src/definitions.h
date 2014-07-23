



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAf1C_q1HypR5DobZpWPde1u2-YJPQ:1406096470237";
 
 
 var CS_env = {"assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "projectName": "avesta74", "projectHomeUrl": "/p/avesta74", "relativeBaseUrl": "", "loggedInUserEmail": "jose.guitian@coremain.com", "profileUrl": "/u/108692122734644646415/", "token": "ABZ6GAf1C_q1HypR5DobZpWPde1u2-YJPQ:1406096470237", "domainName": null, "assetHostPath": "https://ssl.gstatic.com/codesite/ph"};
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
 
 
 <title>definitions.h - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Favesta74%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fdefinitions.h" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/avesta74/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/avesta74/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>definitions.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/avesta74/source/browse/trunk/src/definitions.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/avesta74/source/browse/trunk/src/definitions.h?r=47" title="Previous">&lsaquo;r47</a></li>
 
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

><td class="source">// various definitions needed by most files<br></td></tr
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

><td class="source">#ifndef __OTSERV_DEFINITIONS_H__<br></td></tr
><tr
id=sl_svn102_22

><td class="source">#define __OTSERV_DEFINITIONS_H__<br></td></tr
><tr
id=sl_svn102_23

><td class="source"><br></td></tr
><tr
id=sl_svn102_24

><td class="source">#define OTSERV_VERSION &quot;0.6.5&quot;<br></td></tr
><tr
id=sl_svn102_25

><td class="source">#define OTSERV_NAME &quot;Avesta&quot;<br></td></tr
><tr
id=sl_svn102_26

><td class="source"><br></td></tr
><tr
id=sl_svn102_27

><td class="source">#if defined (__PROTOCOL_76__)<br></td></tr
><tr
id=sl_svn102_28

><td class="source">#define OTSERV_CLIENT_VERSION &quot;7.60&quot;<br></td></tr
><tr
id=sl_svn102_29

><td class="source">#elif defined (__PROTOCOL_77__)<br></td></tr
><tr
id=sl_svn102_30

><td class="source">#define __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_31

><td class="source">#define OTSERV_CLIENT_VERSION &quot;7.70&quot;<br></td></tr
><tr
id=sl_svn102_32

><td class="source">#else<br></td></tr
><tr
id=sl_svn102_33

><td class="source">#define OTSERV_CLIENT_VERSION &quot;7.40&quot;<br></td></tr
><tr
id=sl_svn102_34

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_35

><td class="source"><br></td></tr
><tr
id=sl_svn102_36

><td class="source">#ifdef __USE_SQLITE__<br></td></tr
><tr
id=sl_svn102_37

><td class="source">	#define SINGLE_SQL_DRIVER<br></td></tr
><tr
id=sl_svn102_38

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_39

><td class="source"><br></td></tr
><tr
id=sl_svn102_40

><td class="source">#ifdef __USE_MYSQL__<br></td></tr
><tr
id=sl_svn102_41

><td class="source">	#ifdef SINGLE_SQL_DRIVER<br></td></tr
><tr
id=sl_svn102_42

><td class="source">		#define MULTI_SQL_DRIVERS<br></td></tr
><tr
id=sl_svn102_43

><td class="source">	#else<br></td></tr
><tr
id=sl_svn102_44

><td class="source">		#define SINGLE_SQL_DRIVER<br></td></tr
><tr
id=sl_svn102_45

><td class="source">	#endif<br></td></tr
><tr
id=sl_svn102_46

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_47

><td class="source"><br></td></tr
><tr
id=sl_svn102_48

><td class="source">//Default sql driver<br></td></tr
><tr
id=sl_svn102_49

><td class="source">#if !defined(SINGLE_SQL_DRIVER) &amp;&amp; !defined(MULTI_SQL_DRIVERS)<br></td></tr
><tr
id=sl_svn102_50

><td class="source">	#define __USE_SQLITE__<br></td></tr
><tr
id=sl_svn102_51

><td class="source">	#define SINGLE_SQL_DRIVER<br></td></tr
><tr
id=sl_svn102_52

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_53

><td class="source"><br></td></tr
><tr
id=sl_svn102_54

><td class="source">enum passwordType_t{<br></td></tr
><tr
id=sl_svn102_55

><td class="source">	PASSWORD_TYPE_PLAIN = 0,<br></td></tr
><tr
id=sl_svn102_56

><td class="source">	PASSWORD_TYPE_MD5,<br></td></tr
><tr
id=sl_svn102_57

><td class="source">	PASSWORD_TYPE_SHA1<br></td></tr
><tr
id=sl_svn102_58

><td class="source">};<br></td></tr
><tr
id=sl_svn102_59

><td class="source"><br></td></tr
><tr
id=sl_svn102_60

><td class="source">#ifndef __FUNCTION__<br></td></tr
><tr
id=sl_svn102_61

><td class="source">	#define	__FUNCTION__ __func__<br></td></tr
><tr
id=sl_svn102_62

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_63

><td class="source"><br></td></tr
><tr
id=sl_svn102_64

><td class="source">/*<br></td></tr
><tr
id=sl_svn102_65

><td class="source">	Compiler setup<br></td></tr
><tr
id=sl_svn102_66

><td class="source">*/<br></td></tr
><tr
id=sl_svn102_67

><td class="source">#if defined __GNUC__<br></td></tr
><tr
id=sl_svn102_68

><td class="source">	#include &quot;compiler/gcc.h&quot;<br></td></tr
><tr
id=sl_svn102_69

><td class="source">#elif defined(_MSC_VER)<br></td></tr
><tr
id=sl_svn102_70

><td class="source">	#include &quot;compiler/msvc.h&quot;<br></td></tr
><tr
id=sl_svn102_71

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_72

><td class="source"><br></td></tr
><tr
id=sl_svn102_73

><td class="source">/*<br></td></tr
><tr
id=sl_svn102_74

><td class="source">	If the compiler supports the upcoming standard,<br></td></tr
><tr
id=sl_svn102_75

><td class="source">	call some of the useful headers.<br></td></tr
><tr
id=sl_svn102_76

><td class="source">*/<br></td></tr
><tr
id=sl_svn102_77

><td class="source">#ifdef __OTSERV_CXX0X__<br></td></tr
><tr
id=sl_svn102_78

><td class="source">	#include &lt;cstdint&gt;<br></td></tr
><tr
id=sl_svn102_79

><td class="source">	#include &lt;unordered_map&gt;<br></td></tr
><tr
id=sl_svn102_80

><td class="source">	#include &lt;unordered_set&gt;<br></td></tr
><tr
id=sl_svn102_81

><td class="source">#else<br></td></tr
><tr
id=sl_svn102_82

><td class="source">	#include &quot;compiler/workarounds.h&quot;<br></td></tr
><tr
id=sl_svn102_83

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_84

><td class="source"><br></td></tr
><tr
id=sl_svn102_85

><td class="source">#ifdef _WIN32_WINNT<br></td></tr
><tr
id=sl_svn102_86

><td class="source">	#undef _WIN32_WINNT<br></td></tr
><tr
id=sl_svn102_87

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_88

><td class="source">//Windows 2000	0x0500<br></td></tr
><tr
id=sl_svn102_89

><td class="source">//Windows Xp	0x0501<br></td></tr
><tr
id=sl_svn102_90

><td class="source">//Windows 2003	0x0502<br></td></tr
><tr
id=sl_svn102_91

><td class="source">//Windows Vista	0x0600<br></td></tr
><tr
id=sl_svn102_92

><td class="source">//Windows Seven 0x0601<br></td></tr
><tr
id=sl_svn102_93

><td class="source">#define _WIN32_WINNT 0x0501<br></td></tr
><tr
id=sl_svn102_94

><td class="source"><br></td></tr
><tr
id=sl_svn102_95

><td class="source">// OpenTibia configuration<br></td></tr
><tr
id=sl_svn102_96

><td class="source">#if !defined(__NO_SKULLSYSTEM__) &amp;&amp; !defined(__SKULLSYSTEM__)<br></td></tr
><tr
id=sl_svn102_97

><td class="source">	#define __SKULLSYSTEM__<br></td></tr
><tr
id=sl_svn102_98

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_99

><td class="source"><br></td></tr
><tr
id=sl_svn102_100

><td class="source">// Boost exception handling must be enabled<br></td></tr
><tr
id=sl_svn102_101

><td class="source">#ifdef BOOST_NO_EXCEPTIONS<br></td></tr
><tr
id=sl_svn102_102

><td class="source">	#error &quot;Boost exception handling must be enabled.&quot;<br></td></tr
><tr
id=sl_svn102_103

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_104

><td class="source"><br></td></tr
><tr
id=sl_svn102_105

><td class="source">//Enable multi-byte character set under MSVC<br></td></tr
><tr
id=sl_svn102_106

><td class="source">#ifdef _MSC_VER<br></td></tr
><tr
id=sl_svn102_107

><td class="source">	#ifndef _MBCS<br></td></tr
><tr
id=sl_svn102_108

><td class="source">		#define _MBCS<br></td></tr
><tr
id=sl_svn102_109

><td class="source">	#endif<br></td></tr
><tr
id=sl_svn102_110

><td class="source">	#ifdef _UNICODE<br></td></tr
><tr
id=sl_svn102_111

><td class="source">		#undef _UNICODE <br></td></tr
><tr
id=sl_svn102_112

><td class="source">	#endif<br></td></tr
><tr
id=sl_svn102_113

><td class="source">	#ifdef UNICODE<br></td></tr
><tr
id=sl_svn102_114

><td class="source">		#undef UNICODE<br></td></tr
><tr
id=sl_svn102_115

><td class="source">	#endif<br></td></tr
><tr
id=sl_svn102_116

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_117

><td class="source"><br></td></tr
><tr
id=sl_svn102_118

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
 <a href="/p/avesta74/source/detail?spec=svn102&amp;r=52">r52</a>
 by r...@ymail.com
 on Jul 8, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=52&amp;format=side&amp;path=/trunk/src/definitions.h&amp;old_path=/trunk/src/definitions.h&amp;old=47">Diff</a>
 </div>
 <pre>[No log message]</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/avesta74/source/detail?r=52&spec=svn102';
 var publish_url = '/p/avesta74/source/detail?r=52&spec=svn102#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/src/actions.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/actions.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/actions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/actions.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ban.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ban.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/beds.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/beds.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/beds.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/beds.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/chat.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/chat.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/combat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/combat.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/commands.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/commands.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/configmanager.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/configmanager.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/configmanager.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/configmanager.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/connection.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/connection.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/const.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/const.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/const74.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/const74.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/container.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/container.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creatureevent.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creatureevent.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasesqlite.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasesqlite.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/definitions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/definitions.h?r\x3d52\x26spec\x3dsvn102');
 
 var selected_path = '/trunk/src/definitions.h';
 
 
 changed_paths.push('/trunk/src/depot.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/depot.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/enums.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/enums.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/game.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/game.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapserialize.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapserialize.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ioplayer.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/mailbox.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/mailbox.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/monster.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/monster.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/networkmessage.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/networkmessage.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/networkmessage.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/networkmessage.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/otpch.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/otpch.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/otserv.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/otserv.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/party.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/party.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocol.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocol.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocol.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocol.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocol74.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocol74.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocol74.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocol74.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocolgame.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocolgame.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocolgame.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocolgame.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocollogin.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocollogin.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/protocollogin.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/protocollogin.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/raids.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/raids.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/resource.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/resource.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/rsa.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/rsa.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/rsa.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/rsa.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/server.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/server.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/spells.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/spells.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/spells.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/spells.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/talkaction.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/talkaction.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/tasks.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/tasks.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/thing.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/thing.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/tools.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/tools.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/trashholder.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/trashholder.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/vocation.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/vocation.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/vocation.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/vocation.h?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/weapons.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/weapons.cpp?r\x3d52\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/weapons.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/weapons.h?r\x3d52\x26spec\x3dsvn102');
 
 
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
 
 <option value="/p/avesta74/source/browse/trunk/src/actions.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/actions.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/actions.h?r=52&amp;spec=svn102"
 
 >/trunk/src/actions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ban.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/ban.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/beds.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/beds.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/beds.h?r=52&amp;spec=svn102"
 
 >/trunk/src/beds.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/chat.h?r=52&amp;spec=svn102"
 
 >/trunk/src/chat.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/combat.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/combat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/commands.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/commands.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/condition.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.h?r=52&amp;spec=svn102"
 
 >/trunk/src/condition.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/configmanager.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/configmanager.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/configmanager.h?r=52&amp;spec=svn102"
 
 >/trunk/src/configmanager.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/connection.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/connection.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/const.h?r=52&amp;spec=svn102"
 
 >/trunk/src/const.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/const74.h?r=52&amp;spec=svn102"
 
 >/trunk/src/const74.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/container.h?r=52&amp;spec=svn102"
 
 >/trunk/src/container.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/creature.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.h?r=52&amp;spec=svn102"
 
 >/trunk/src/creature.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creatureevent.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/creatureevent.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasesqlite.h?r=52&amp;spec=svn102"
 
 >/trunk/src/databasesqlite.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/definitions.h?r=52&amp;spec=svn102"
 selected="selected"
 >/trunk/src/definitions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/depot.h?r=52&amp;spec=svn102"
 
 >/trunk/src/depot.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/enums.h?r=52&amp;spec=svn102"
 
 >/trunk/src/enums.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/game.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/game.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapserialize.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/iomapserialize.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/ioplayer.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/items.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.h?r=52&amp;spec=svn102"
 
 >/trunk/src/items.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/luascript.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.h?r=52&amp;spec=svn102"
 
 >/trunk/src/luascript.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/mailbox.h?r=52&amp;spec=svn102"
 
 >/trunk/src/mailbox.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/monster.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/monster.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/networkmessage.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/networkmessage.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/networkmessage.h?r=52&amp;spec=svn102"
 
 >/trunk/src/networkmessage.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/otpch.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/otpch.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/otserv.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/otserv.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/party.h?r=52&amp;spec=svn102"
 
 >/trunk/src/party.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/player.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.h?r=52&amp;spec=svn102"
 
 >/trunk/src/player.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocol.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/protocol.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocol.h?r=52&amp;spec=svn102"
 
 >/trunk/src/protocol.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocol74.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/protocol74.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocol74.h?r=52&amp;spec=svn102"
 
 >/trunk/src/protocol74.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocolgame.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/protocolgame.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocolgame.h?r=52&amp;spec=svn102"
 
 >/trunk/src/protocolgame.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocollogin.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/protocollogin.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/protocollogin.h?r=52&amp;spec=svn102"
 
 >/trunk/src/protocollogin.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/raids.h?r=52&amp;spec=svn102"
 
 >/trunk/src/raids.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/resource.h?r=52&amp;spec=svn102"
 
 >/trunk/src/resource.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/rsa.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/rsa.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/rsa.h?r=52&amp;spec=svn102"
 
 >/trunk/src/rsa.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/server.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/server.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/spells.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/spells.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/spells.h?r=52&amp;spec=svn102"
 
 >/trunk/src/spells.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/talkaction.h?r=52&amp;spec=svn102"
 
 >/trunk/src/talkaction.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/tasks.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/tasks.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/thing.h?r=52&amp;spec=svn102"
 
 >/trunk/src/thing.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/tools.h?r=52&amp;spec=svn102"
 
 >/trunk/src/tools.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/trashholder.h?r=52&amp;spec=svn102"
 
 >/trunk/src/trashholder.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/vocation.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/vocation.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/vocation.h?r=52&amp;spec=svn102"
 
 >/trunk/src/vocation.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/weapons.cpp?r=52&amp;spec=svn102"
 
 >/trunk/src/weapons.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/weapons.h?r=52&amp;spec=svn102"
 
 >/trunk/src/weapons.h</option>
 
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
 <a href="/p/avesta74/source/detail?spec=svn102&r=47">r47</a>
 by r...@ymail.com
 on Apr 15, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=47&amp;format=side&amp;path=/trunk/src/definitions.h&amp;old_path=/trunk/src/definitions.h&amp;old=37">Diff</a>
 <br>
 <pre class="ifOpened">[No log message]</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=37">r37</a>
 by r...@ymail.com
 on Apr 9, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=37&amp;format=side&amp;path=/trunk/src/definitions.h&amp;old_path=/trunk/src/definitions.h&amp;old=12">Diff</a>
 <br>
 <pre class="ifOpened">monster behaviour fixes
rope with pool on rope spot fix</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=12">r12</a>
 by RSXQ66
 on Aug 3, 2010
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=12&amp;format=side&amp;path=/trunk/src/definitions.h&amp;old_path=/trunk/src/definitions.h&amp;old=7">Diff</a>
 <br>
 <pre class="ifOpened">some fixes from the otserv</pre>
 </div>
 
 
 <a href="/p/avesta74/source/list?path=/trunk/src/definitions.h&start=52">All revisions of this file</a>
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
 
 <div>Size: 3028 bytes,
 118 lines</div>
 
 <div><a href="//avesta74.googlecode.com/svn/trunk/src/definitions.h">View raw file</a></div>
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
 var paths = {'svn102': '/trunk/src/definitions.h'}
 codereviews = CR_controller.setup(
 {"assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "projectName": "avesta74", "projectHomeUrl": "/p/avesta74", "relativeBaseUrl": "", "loggedInUserEmail": "jose.guitian@coremain.com", "profileUrl": "/u/108692122734644646415/", "token": "ABZ6GAf1C_q1HypR5DobZpWPde1u2-YJPQ:1406096470237", "domainName": null, "assetHostPath": "https://ssl.gstatic.com/codesite/ph"}, '', 'svn102', paths,
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

