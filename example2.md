---
layout: page
title: Features
permalink: /css/
---

<h1 class="page-title cdn-h1" style="color: #8985db !important;">{{ page.title | escape }}</h1>

<div class="section">

<br>
<br>
<h4 class="cdn-h2"  style="color: #8985db;">Supported File Formats</h4>
<br>
<h5 class="cdn-h3">Raw Data Files:</h5>
<p class="cdn-content">
ElMaven can read import raw data and export processed data in the following formats:</p>
<br>
<p class="cdn-content">Input-</p>
  <ul class="dotted-list">
    <li class="cdn-content">.mzxml</li>
    <li class="cdn-content">.mzml</li>
  </ul>
  <br>
<h6 class="cdn-content">Output-</h6>
<ul class="dotted-list">
    <li class="cdn-content">.csv</li>
    <li class="cdn-content">.mzml</li>
  </ul>
  <br>
  
<h4 class="cdn-h2" style="color: #8985db;"  >Raw Data Methods:</h4>
<br>
<h4 class="cdn-h3">Instrumentation:</h4>

<p class="cdn-content">Improve m/z calculations by adjusting these modules.</p>
<ul class="dotted-list">
  <li class="cdn-content">Polarity/Ionization Modes</li>
  <li class="cdn-content">Ionization type</li>
  <li class="cdn-content">Q1 accuracy</li>
  <li class="cdn-content">Q3 accuracy</li>
  <li class="cdn-content">Filterline</li>
</ul>
<br>
 <img src="https://user-images.githubusercontent.com/28925846/29772499-b16d721a-8c16-11e7-89d6-0f0d0e2f111e.png" class="img-res"
/>
<br>
<br>
<h4 class="cdn-h3">File Import:</h4> 
<p class="cdn-content">Determine how to store the imported scan information based on ionization method, polarity of ions, MS level, minimum threshold, et cetra.</p>
<ul class="dotted-list">
  <li class="cdn-content">Centroid Scans</li>
  <li class="cdn-content">Scan Filter Polarity</li>
  <li class="cdn-content">Scan Filter MS Level</li>
  <li class="cdn-content">Scan Filter Minimum Intensity</li>
  <li class="cdn-content">Scan Filter Intensity Minimum Quantile Cutoff</li>
  <li class="cdn-content">Enable Multiprocessing</li>
</ul>
<br>
<img  src="https://user-images.githubusercontent.com/28925846/29772500-b16e6850-8c16-11e7-952e-6b7a3551c18f.png" class="img-res"/>

<br>
<h4 class="cdn-h2" style="color: #8985db;">Alignment</h4>
<br>
<p class="cdn-content"> Multiple runs in chromatography column can lead to a drift in retention time across samples. Alignment of the samples corrects for these drifts and brings the peaks closer to median RT of the group.
</p>
<br>
<p class="cdn-h3">Pre-alignment EIC:</p>
<br>
<img class="img-res" src="
 https://user-images.githubusercontent.com/31105033/29817378-4ab73876-8ca7-11e7-9ccc-51cddf7675d9.JPG"/>
 <br>
    
<p class="cdn-h3">Post-alignment EIC:</p>

<p class="cdn-content">ElMaven provides three visualizations for alignment analysis.</p>
<br>
<img class="img-res" src="
 https://user-images.githubusercontent.com/31105033/29817379-4ab90a70-8ca7-11e7-987c-53990b5e265d.JPG
">

    <br>
   <h4 class="cdn-h3">Alignment Visualization</h4> 
  <p class="cdn-content">   Click on this widget and select any group to look at its delta Rt vs Rt graph.</p>
    <br>
    <img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772958-bb02c3fa-8c18-11e7-8efb-2763fc64535a.png" />
  <br>
  <br>
   <h4  class="cdn-h3">Alignment Visualization (For All Groups):
   <br>
   </h4> 
   <p class="cdn-content">This widget shows a graph for delta Rt vs Rt for all the groups.
    </p>
    <br>
    <img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772953-bad88ef0-8c18-11e7-83bb-818adbf7d86c.png" >
  
  <br>
   <h4 class="cdn-h3">Alignment Polynomial Fit:
   </h4> 
   <p class="cdn-content"> Click on this widget bar for Poly fit alignment.
   </p>
    <br>
    <img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772952-ba8b43d4-8c18-11e7-852d-34db2bf20ac6.png" >
  

<ul>
<br>
<h4 class="cdn-h3">Automatic Peak Picking:</h4>
<p class="cdn-content">ElMaven can automatically select high intensity and high quality groups. This workflow is called automatic peak curation. The feature has been tested for accuracy against the gold standard of manually curated peaks by scientists at other tools. This feature reduces the time spent from days to a few hours in curating peaks in Untargted Global Profiling datasets.</p>
<br>
<h4 class="cdn-h3">Peak Detection:</h4>

<p class="cdn-content">Reduce noise in the Extracted Ion Chromatograms (EIC) with settings for smoothing, baseline and peak filtering.
</p><br>

<p class="cdn-content">Peak Detection and Grouping Settings</p>
<ul class="dotted-list cdn-content" >
  <li class="cdn-content">EIC Smoothing Algorithm</li>
  <li class="cdn-content">EIC Smoothing Window</li>
  <li class="cdn-content">Max Retention Time Difference Between Peaks
</li>
</ul>
<br>
<p class="cdn-content">Baseline Calculation</p>
<ul class="dotted-list cdn-content">
  <li class="cdn-content">Drop top x% intensities from chromatogram</li>
  <li class="cdn-content">Baseline Smoothing</li>
</ul>
<br>
<p class="cdn-content">Peak Filtering</p>
<ul class="dotted-list">
  <li class="cdn-content">Min. Signal Baseline Difference</li>
</ul>
<br>
<img class="img-res" src=" https://user-images.githubusercontent.com/28925846/29772498-b16c2c16-8c16-11e7-8ada-783f974307c0.png">
<br>
<br>

<p class="cdn-content">
<h4 class="cdn-h3" >Isotope Detection:</h4></p>
<p class="cdn-content">Detect labeled samples by enabling the following settings according to the tracer used.</p>
<p class="cdn-content">Are Sample Labeled?</p>
<ul class="dotted-list">
  <li class="cdn-content">Bookmarks, peak detection, file export</li>
  <li class="cdn-content">Isotopic barplot</li>
  <li class="cdn-content">Isotopic widget</li>
  <li class="cdn-content">Number of M+n isotopes</li>
  <li class="cdn-content">Abundance Threshold</li>
</ul>

<p class="cdn-content">Filter Isotopic Peaks based on these criteria</p>
<ul class="dotted-list">
  <li class="cdn-content">Minimum Isotope-Parent Correlation</li>
  <li class="cdn-content">Isotope is within [X] scans of parent</li>
  <li class="cdn-content">Maximum % Error to Natural Abundance</li>
  <li class="cdn-content">Correct for Natural C13 Isotope Abundance</li>
<ul>
<br>

<img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772496-b1680ec4-8c16-11e7-81ea-2308c552a30d.png">
<br>

<p class="cdn-content">
<br>
<h4 class="cdn-h3">EIC (XIC):</h4> 
<p class="cdn-content">Detect labeled samples by enabling the following settings according to the tracer used.</p>
<p class="cdn-content">Select a method to merge EICs over m/z from:</p>
<ul class="dotted-list">
  <li class="cdn-content">EIC type</li>
</ul>
<br>
<img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772495-b1675da8-8c16-11e7-9263-ff7d355cfc15.png">
<br>
</p>
<br>

<p class="cdn-content">
<h4 class="cdn-h3">Peak Grouping:</h4>
<p class="cdn-content">All peaks originating from the same ion are sought to be viewed together. Peaks are assigned a grouping score to determine whether they should be grouped together. The score depends on the following 3 parameters and their weights:</p>
<ol >
  <li class="cdn-content">a) RT difference: Closer peaks are assigned a higher score.</li>
  <li class="cdn-content">b) Intensity difference: Smaller difference accounts for a higher score.</li>
  <li class="cdn-content">c) Overlap: Greater overlap accounts for a higher score.</li>
</ol>
<br>
<p class="cdn-content">Adjust these parameters with:</p>
<ul class="dotted-list">
  <li class="cdn-content">Consider Overlap</li>
  <li class="cdn-content">Sliders provided to adjust the weights attached to each of the three parameters.</li>
</ul>
<br>
<img class="img-res" src=" https://user-images.githubusercontent.com/28925846/29772494-b1392604-8c16-11e7-8b9e-94323ca93b27.png"></p>
<br>
<br>
<p class="cdn-content">
<h4 class="cdn-h3">Group Ranks:</h4> 
</p>
<p class="cdn-content">Group rank is one of the parameters for group filtering. The score changes in the following manner</p>
<ol>
  <li class="cdn-content">a) Group Quality: Peaks are assigned a quality score by a machine learning algorithm in El Maven. Better quality leads to a higher rank.</li>
  <li class="cdn-content">b) Group Intensity: Better intensity leads to a higher rank.</li>
  <li class="cdn-content">c) RT difference: Samller RT difference leads to a higher rank. The slider is disabled if Consider Retention Time is unchecked.</li>
</ol>
<br>
<p class="cdn-content">Adjust these parameters with:</p>
<ol>
<li class="cdn-content">a) Consider Retention Time</li>
<li class="cdn-content">b) Quality Weight slider</li>
<li class="cdn-content">c) Intensity Weight slider</li>
<li class="cdn-content">d) dRT Weight slider</li>
</ol>
<br><img class="img-res" src="https://user-images.githubusercontent.com/28925846/29772493-b10d2dce-8c16-11e7-8712-06558f025c14.png">
<br>
<br>
<h4 class=" cdn-h2" style="color: #8985db;">Statistical Analysis</h4>
<br>
<h4 class="cdn-h3">Scatter Plot:</h4>

<p class="cdn-content"> It represents the log2 of fold change between the two sets: Sample 1 and Sample 2. The points falling on the diagonal line indicates high similarity between the sets. The two sets can be, for example, samples from a diseased cell and a healthy cell. In such cases the comparison helps study the difference between them.
</p>
<br>
<img class="img-res" src="https://elucidatainc.atlassian.net/wiki/download/attachments/21201203/ScatterPlot.PNG?version=1&modificationDate=1504860441052&cacheVersion=1&api=v2">
<br>
<h4 class="cdn-h3">Volcano Plot:</h4><p class="cdn-content">
 Significance vs. Fold change graph to view differential intensities or abundances of two sets: Sample 1 and Sample 2.</p> 
<br>
<img class="img-res" src="https://elucidatainc.atlassian.net/wiki/download/attachments/21201203/FlowerPlot.PNG?version=1&modificationDate=1504860460783&cacheVersion=1&api=v2">
<br>
<h4 class="cdn-h3">Cluster Analysis:</h4>
<p class="cdn-content">
 The cluster analysis is used to give a visual representation of the correlation between the metabolites in all the samples.</p>
<br>
<br>
<h4 class="cdn-h2" style="color: #8985db;" >Visualizations</h4>
<br>
<h4 class="cdn-h3">Chromatogram Plot:</h4>

<p class="cdn-content">An Extracted Ion Chromatogram (EIC) is a graph of Intensity vs. RT for a specific m/z range. EIC window displays the peaks for every compound selected or m/z range provided.
</p>
<br><img class="img-res" src="https://user-images.githubusercontent.com/28925846/29777350-5f5f2bcc-8c29-11e7-8f70-d1fd87146fb8.png"> 
<br>
<h4 class="cdn-h3">Total Ion Current:</h4>
<p class="cdn-content"> TIC is the sum of all intensities in a scan.
</p>
<br>
<img class="img-res" src="https://elucidatainc.atlassian.net/wiki/download/attachments/21201203/TIC.PNG?version=1&modificationDate=1504861203790&cacheVersion=1&api=v2">
<br>
<h4 class="cdn-h3">Peak Intensity Barplot:</h4>
<p class="cdn-content">
They display the peak intensity for a group in every sample. Intensity can be calculated by various quantitation types: Area, AreaTop, Height etc.
</p>
<br><img class="img-res" src=" https://user-images.githubusercontent.com/28925846/29876673-18d6f49e-8dbb-11e7-92da-3c9132aafeed.png"> 
<br>
<h4 class="cdn-h3">Isotope Plot:</h4>
 <p class="cdn-content">
This visual displays the relative presence of all isotopologues of an ion. Each bar in the plot represents the relative percentage of different isotopic species for the selected group in a sample.

</p>
<br><img class="img-src" src=" https://user-images.githubusercontent.com/28925846/29966908-9b79f35c-8f31-11e7-9516-b2746f444234.png ">
<br>
<br>
<h4 class="cdn-h3">Box Plot: </h4>

<p class="cdn-content">
The box plot shows the spread of intensities in the group, and where each peak lies in relation to the median RT.
<p>
<br>
<h4 class="cdn-h3">Mass Spectra:</h4>

<p class="cdn-content">
Mass Spectra plot displays each peak, its mass, and intensity for a scan. This feature is especially useful for MS/MS data and isotopic detection. Adjustments made in grouping, by changing the PPM value for EIC, is reflected in this spectra.
</p>
<br>
<img class="img-res" src=" https://user-images.githubusercontent.com/28925846/29877841-5dc3e7a8-8dbe-11e7-804c-a897c15fe763.JPG "/> 

<br>
<h4 class="cdn-h3">Alignment Visualization:</h4> 

<p class="cdn-content">Prolonged use of the LC column can lead to a drift in retention time across samples. Alignment shifts the peak RTs in every sample to correct for this drift and brings the peaks closer to median RT of the group. The three alignment graphs indicate how aligned or misaligned the peaks in a group are.
</p>
<br>
<ul class="dotted-list">
<li class="cdn-content">
<h4 class="cdn-h3">Visualization for One Group:</h4><br><img src="https://user-images.githubusercontent.com/28925846/29772958-bb02c3fa-8c18-11e7-8efb-2763fc64535a.png" class="img-res"> </li>
<br>
<li class="cdn-content">
<h4 class="cdn-h3">Visualization for All Groups:</h4><br> <img src="https://user-images.githubusercontent.com/28925846/29772953-bad88ef0-8c18-11e7-83bb-818adbf7d86c.png" class="img-res"></li>
<br>
<li class="cdn-content">
<h4 class="cdn-h3">Alignment Polynomial fit: </h4>
<br>
<img  src="https://user-images.githubusercontent.com/28925846/29772952-ba8b43d4-8c18-11e7-852d-34db2bf20ac6.png" class="img-res"></li>
</ul>

