<?php
/**
 * @file
 * views_view.administer_content.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'administer_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Manage Content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Administer Content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer nodes';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_county' => 'field_county',
  'field_program_area' => 'field_program_area',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_county' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_program_area' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '  |  ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['label'] = 'Author';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['status']['alter']['text'] = '<img src="/drupal/sites/default/files/[status].png" />';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'history';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: StartDate */
$handler->display->display_options['fields']['field_startdate']['id'] = 'field_startdate';
$handler->display->display_options['fields']['field_startdate']['table'] = 'field_data_field_startdate';
$handler->display->display_options['fields']['field_startdate']['field'] = 'field_startdate';
$handler->display->display_options['fields']['field_startdate']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: County */
$handler->display->display_options['fields']['field_county']['id'] = 'field_county';
$handler->display->display_options['fields']['field_county']['table'] = 'field_data_field_county';
$handler->display->display_options['fields']['field_county']['field'] = 'field_county';
$handler->display->display_options['fields']['field_county']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_county']['multi_type'] = 'ul';
/* Field: Content: Program Area */
$handler->display->display_options['fields']['field_program_area']['id'] = 'field_program_area';
$handler->display->display_options['fields']['field_program_area']['table'] = 'field_data_field_program_area';
$handler->display->display_options['fields']['field_program_area']['field'] = 'field_program_area';
$handler->display->display_options['fields']['field_program_area']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_program_area']['multi_type'] = 'ul';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
/* Filter criterion: Content: Program Area (field_program_area) */
$handler->display->display_options['filters']['field_program_area_tid']['id'] = 'field_program_area_tid';
$handler->display->display_options['filters']['field_program_area_tid']['table'] = 'field_data_field_program_area';
$handler->display->display_options['filters']['field_program_area_tid']['field'] = 'field_program_area_tid';
$handler->display->display_options['filters']['field_program_area_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_program_area_tid']['expose']['operator_id'] = 'field_program_area_tid_op';
$handler->display->display_options['filters']['field_program_area_tid']['expose']['label'] = 'Program Area (field_program_area)';
$handler->display->display_options['filters']['field_program_area_tid']['expose']['operator'] = 'field_program_area_tid_op';
$handler->display->display_options['filters']['field_program_area_tid']['expose']['identifier'] = 'field_program_area_tid';
$handler->display->display_options['filters']['field_program_area_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_program_area_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_program_area_tid']['vocabulary'] = 'program_areas';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: All Content';
$handler->display->display_options['path'] = 'a/contentmanager';
$handler->display->display_options['menu']['title'] = 'All Content';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: All Content */
$handler = $view->new_display('page', 'All Content', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: All Content';
$handler->display->display_options['path'] = 'a/contentmanager/all';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'All Content';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: News */
$handler = $view->new_display('page', 'News', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: News';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/news';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Events */
$handler = $view->new_display('page', 'Events', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: Events';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/events';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Events';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: DELs */
$handler = $view->new_display('page', 'DELs', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: DELs';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_programarea' => 'field_programarea',
  'field_emphasis' => 'field_emphasis',
  'field_county' => 'field_county',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_programarea' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_emphasis' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_county' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '  |  ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'del' => 'del',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_emphasis_tid']['id'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['filters']['field_emphasis_tid']['field'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_emphasis_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator_id'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['label'] = 'Emphasis (field_emphasis)';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['identifier'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/dels';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'DELs';
$handler->display->display_options['menu']['weight'] = '-9';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Local Offices */
$handler = $view->new_display('page', 'Local Offices', 'page_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: Local Offices';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_programarea' => 'field_programarea',
  'field_emphasis' => 'field_emphasis',
  'field_county' => 'field_county',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_programarea' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_emphasis' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_county' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '  |  ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'local_offices' => 'local_offices',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_emphasis_tid']['id'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['filters']['field_emphasis_tid']['field'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_emphasis_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator_id'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['label'] = 'Emphasis (field_emphasis)';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['identifier'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/offices';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Local Offices';
$handler->display->display_options['menu']['weight'] = '-8';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Local Programs */
$handler = $view->new_display('page', 'Local Programs', 'page_6');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: Local Programs';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'field_county' => 'field_county',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_programarea' => 'field_programarea',
  'field_emphasis' => 'field_emphasis',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'field_county';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_county' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '   ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_programarea' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_emphasis' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '   |   ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['status']['alter']['text'] = '<img src="/drupal/sites/default/files/[status].png" />';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: County */
$handler->display->display_options['fields']['field_county']['id'] = 'field_county';
$handler->display->display_options['fields']['field_county']['table'] = 'field_data_field_county';
$handler->display->display_options['fields']['field_county']['field'] = 'field_county';
$handler->display->display_options['fields']['field_county']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_county']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_county']['multi_type'] = 'ul';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'history';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['label'] = '';
$handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: StartDate */
$handler->display->display_options['fields']['field_startdate']['id'] = 'field_startdate';
$handler->display->display_options['fields']['field_startdate']['table'] = 'field_data_field_startdate';
$handler->display->display_options['fields']['field_startdate']['field'] = 'field_startdate';
$handler->display->display_options['fields']['field_startdate']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_emphasis']['id'] = 'field_emphasis';
$handler->display->display_options['fields']['field_emphasis']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['fields']['field_emphasis']['field'] = 'field_emphasis';
$handler->display->display_options['fields']['field_emphasis']['label'] = 'Emphasis';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'local_programs' => 'local_programs',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_emphasis_tid']['id'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['filters']['field_emphasis_tid']['field'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_emphasis_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator_id'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['label'] = 'Emphasis (field_emphasis)';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['identifier'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/programs';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Local Programs';
$handler->display->display_options['menu']['weight'] = '-7';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: PWTs */
$handler = $view->new_display('page', 'PWTs', 'page_7');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: PWTs';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_programarea' => 'field_programarea',
  'field_emphasis' => 'field_emphasis',
  'field_county' => 'field_county',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_programarea' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_emphasis' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_county' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '  |  ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'pwt' => 'pwt',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_emphasis_tid']['id'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['filters']['field_emphasis_tid']['field'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_emphasis_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator_id'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['label'] = 'Emphasis (field_emphasis)';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['identifier'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/pwts';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'PWTs';
$handler->display->display_options['menu']['weight'] = '-6';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Success Stories */
$handler = $view->new_display('page', 'Success Stories', 'page_8');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Content: Success Stories';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'status' => 'status',
  'title' => 'title',
  'timestamp_1' => 'title',
  'name' => 'name',
  'field_startdate' => 'field_startdate',
  'type' => 'type',
  'field_programarea' => 'field_programarea',
  'field_emphasis' => 'field_emphasis',
  'field_county' => 'field_county',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'timestamp_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_startdate' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_programarea' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_emphasis' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'field_county' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 1,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '  |  ',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'success_stories' => 'success_stories',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_emphasis_tid']['id'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['table'] = 'field_data_field_emphasis';
$handler->display->display_options['filters']['field_emphasis_tid']['field'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['operator'] = 'or';
$handler->display->display_options['filters']['field_emphasis_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator_id'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['label'] = 'Emphasis (field_emphasis)';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['operator'] = 'field_emphasis_tid_op';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['identifier'] = 'field_emphasis_tid';
$handler->display->display_options['filters']['field_emphasis_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
/* Filter criterion: Content: County (field_county) */
$handler->display->display_options['filters']['field_county_tid']['id'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['table'] = 'field_data_field_county';
$handler->display->display_options['filters']['field_county_tid']['field'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_county_tid']['expose']['operator_id'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['label'] = 'County (field_county)';
$handler->display->display_options['filters']['field_county_tid']['expose']['operator'] = 'field_county_tid_op';
$handler->display->display_options['filters']['field_county_tid']['expose']['identifier'] = 'field_county_tid';
$handler->display->display_options['filters']['field_county_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_county_tid']['vocabulary'] = 'counties';
$handler->display->display_options['path'] = 'a/contentmanager/ss';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Success Stories';
$handler->display->display_options['menu']['weight'] = '-5';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 1;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['title'] = 'All Content';
$handler->display->display_options['tab_options']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'date',
  3 => 'taxonomy',
);
