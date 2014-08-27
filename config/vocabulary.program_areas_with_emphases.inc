<?php
/**
 * @file
 * vocabulary.program_areas_with_emphases.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '6',
  'name' => 'Program Areas With Emphases',
  'machine_name' => 'program_areas_with_emphases',
  'description' => '',
  'hierarchy' => '1',
  'module' => 'taxonomy',
  'weight' => '0',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
