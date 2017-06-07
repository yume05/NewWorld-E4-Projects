import { Component } from '@angular/core';

import { MapPage } from '../map/map';
import { ListPage } from '../list/list';
import { InformationPage } from '../information/information';

@Component({
  templateUrl: 'tabs.html'
})
export class TabsPage {

  tab1Root = MapPage;
  tab2Root = ListPage;
  tab3Root = InformationPage;

  constructor() {

  }
}
